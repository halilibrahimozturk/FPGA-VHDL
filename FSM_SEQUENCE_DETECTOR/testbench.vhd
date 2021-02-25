LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY tb_fsm_sequence_dedector IS
END tb_fsm_sequence_dedector;
 
ARCHITECTURE behavior OF tb_fsm_sequence_dedector IS 
 
 
    COMPONENT fsm_sequence_dedector
    PORT(
         clock : IN  std_logic;
         reset : IN  std_logic;
         input : IN  std_logic;
			enable : IN std_logic;
			out1: OUT std_logic ;
			out2: OUT std_logic ;

			sequence : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal reset : std_logic := '0';
   signal input : std_logic := '0';
	signal enable : std_logic := '0';
  --Outputs
  signal out1 : std_logic:='0';
  signal out2 : std_logic:='0';

	signal sequence : std_logic_vector (7 downto 0 ):="00000000";
	
   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
   uut: fsm_sequence_dedector PORT MAP (
          clock => clock,
          reset => reset,
          input => input,
			 enable => enable,
          out1 => out1,
			 out2 => out2,

			 sequence => sequence
			 );

   -- Clock process definitions
   clock_process :process
   begin
  clock <= '0';
  wait for clock_period/2;
  clock <= '1';
  wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin  
      -- hold reset state for 100 ns.
  input <= '0';
  reset <= '1';
  -- Wait 100 ns for global reset to finish
  wait for 20 ns;
      reset <= '0';
		enable <= '1';
  wait for 10 ns;
  input <= '1';
  wait for 10 ns;
  input <= '0';
  wait for 10 ns;
  input <= '1'; 
  wait for 10 ns;
  input <= '0'; 
  wait for 10 ns;
  input <= '1'; 
  wait for 10 ns;
  input <= '0'; 
  
  
  
  
    wait for 10 ns;
  input <= '1';
  wait for 10 ns;
  input <= '1'; 
  wait for 10 ns;
  input <= '1'; 
  wait for 10 ns;
  input <= '1'; 
      -- insert stimulus here 
      wait;
   end process;

END;