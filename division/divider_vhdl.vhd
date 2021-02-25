library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity lab9_iterator_divider is
   
    port(
        clk, reset: in std_logic;
        start: in std_logic;
       dividend: in std_logic_vector(5 downto 0);
		  divisor : in std_logic_vector(5 downto 0);
        ready: out std_logic;
		  done_led: out std_logic;
		  quoient: out std_logic_vector(5 downto 0);
     remaind: out std_logic_vector(5 downto 0)
    );
end lab9_iterator_divider;

architecture arch of lab9_iterator_divider is
   type state_type is (idle,op,last,done);
   signal state_register, state_next: state_type;
   signal r1_register: unsigned(5 downto 0);
	   signal r1_next: unsigned(5 downto 0);

   signal r2_register: std_logic_vector(5 downto 0);
	   signal r2_next: std_logic_vector(5 downto 0);

   signal r1_temp: unsigned(5 downto 0);
   signal d_register: unsigned(5 downto 0);
	   signal d_next: unsigned(5 downto 0);

   signal n_register: unsigned(2 downto 0);
	   signal n_next: unsigned(2 downto 0);

   signal q: std_logic;
begin
   -- fsmd state and data registers
	
	
	
	
	
   process(clk,reset)
   begin
      if reset='1' then
         state_register <= idle;
      r1_register <= (others=>'0');
        r2_register <= (others=>'0');
        d_register <= (others=>'0');
        n_register <= (others=>'0');
      elsif (clk'event and clk='1') then
        state_register <= state_next;
        r1_register <= r1_next;
         r2_register <= r2_next;
         d_register <= d_next;
        n_register <= n_next;
      end if;
   end process;







   -- fsmd next-state logic and data path logic
	

   process(state_register,n_register,r1_register,r2_register,d_register,
           start,divisor,dividend,q,r1_temp,n_next)
   begin
      ready <='0';
		      done_led<= '0';

     state_next <= state_register;
     r1_next <= r1_register;
     r2_next <= r2_register;
     d_next <= d_register;
      n_next <= n_register;
      case state_register is
        when idle =>
            ready <= '1';
						if start='1' then
             r1_next <= (others=>'0');
					r2_next <= dividend;                  -- dividend
					d_next <= unsigned(divisor);         -- divisor
              n_next <= to_unsigned(7, 3); -- index
              state_next <= op;
           end if;
    




	 when op =>
          -- shift rh and rl left
           r2_next <= r2_register(4 downto 0) & q;
           r1_next <= r1_temp(4 downto 0) & r2_register(5);
          --decrease index
            n_next <= n_register - 1;
            if (n_next=1) then
               state_next <= last;
            end if;
				
				
				
         when last =>  -- last iteration
            r2_next <= r2_register(4 downto 0) & q;
            r1_next <= r1_temp;
            state_next <= done;
         when done =>
            state_next <= idle;
				            done_led <= '1';

      end case;
   end process;

  





  -- compare and subtract
   process(r1_register, d_register)
   begin
      if r1_register >= d_register then
         r1_temp <= r1_register - d_register;
         q <= '1';
      else
         r1_temp <= r1_register;
         q <= '0';
      end if;
   end process;

   -- output
   quoient <= r2_register;
   remaind <= std_logic_vector(r1_register);
end arch;
