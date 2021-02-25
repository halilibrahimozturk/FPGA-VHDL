library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use ieee.std_logic_unsigned.all;
entity fsm_sequence_dedector is
port (
 clock: in std_logic; 
 reset: in std_logic; 
 input: in std_logic; 
 enable : in std_logic; 
 out1 : out std_logic;
 out2 : out std_logic;
 sequence : out std_logic_vector(7 downto 0 ) 
);
end fsm_sequence_dedector;

architecture Behavioral of fsm_sequence_dedector is
type fsm is (Zero, One, OneZero, OneZeroOne, OneZeroOneZero,OneZeroOneOne);


signal currentstate, nextstate: fsm;
signal newsequence : std_logic_vector(7 downto 0);
begin




process(clock,reset)
begin


 if(reset='1') then
  currentstate <= Zero;
  sequence<="00000000";
  newsequence<= "00000000";
  
 elsif(rising_edge(clock)) then
  currentstate <= nextstate;
  
  
  newsequence <= newsequence(6 downto 0) & input;
  sequence <= newsequence;
 end if;
end process;



process(currentstate,input)
begin
if(enable ='1') then
 case(currentstate) is
 when Zero =>
  if(input='1') then

   nextstate <= One;
  else
   nextstate <= Zero;
  end if;
 when One =>
  if(input='0') then

   nextstate <= OneZero;
  else
   nextstate <= One;
  end if;  
 when OneZero=> 
  if(input='1') then

   nextstate <= OneZeroOne;
  else
   nextstate <= Zero;
  end if;  
 when OneZeroOne =>
  if(input='1') then

   nextstate <= OneZeroOneOne;
  else
   nextstate <= OneZeroOneZero;
  end if ;
 when OneZeroOneZero =>
  if(input='1') then
   nextstate <= OneZeroOne;
  else
   nextstate <= Zero;
  end if;
  
  
  
  when OneZeroOneOne =>
  if(input='1') then
   nextstate <= One;
  else
   nextstate <= OneZero;
  end if;
  
  
  
  
 end case;
 end if;

end process;


process(currentstate)


begin 
 case currentstate is
 when Zero =>
 
 out1<='0';
	
	 out2<='0';

	
 when One =>
 out1<='0';

	 out2<='0';



	when OneZero => 
 out1<='0';

	 out2<='0';


	when OneZeroOne =>
 out1<='0';
	 out2<='0';



	when OneZeroOneZero =>
 out1<='1';
	
		 out2<='0';

	when OneZeroOneOne =>
 out2<='1';
  out1<='0';

 end case;
 
 
 
 
 
end process;
end Behavioral;