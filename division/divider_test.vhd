--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:59:48 01/07/2021
-- Design Name:   
-- Module Name:   C:/Windows/system32/division/divider_test.vhd
-- Project Name:  division
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lab9_iterator_divider
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY divider_test IS
END divider_test;
 
ARCHITECTURE behavior OF divider_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lab9_iterator_divider
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         start : IN  std_logic;
         divisor : IN  std_logic_vector(5 downto 0);
         dividend : IN  std_logic_vector(5 downto 0);
         quoient : OUT  std_logic_vector(5 downto 0);
			
         remaind : OUT  std_logic_vector(5 downto 0);
					  done_led: OUT std_logic;
					           ready : OUT  std_logic


        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal start : std_logic := '0';
   signal divisor : std_logic_vector(5 downto 0) := (others => '0');
   signal dividend : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
	 signal quoient : std_logic_vector(5 downto 0);
   signal remaind : std_logic_vector(5 downto 0);
	
   signal ready : std_logic;
	   signal done_led : std_logic;

  

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab9_iterator_divider PORT MAP (
          clk => clk,
          reset => reset,
          start => start,
          divisor => divisor,
          dividend => dividend,
          ready => ready,
          quoient => quoient,
			 done_led =>done_led,
          remaind => remaind
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		reset <='1';
		
      wait for 100 ns;
		reset <='0';
		dividend<="011100";
		divisor<="000001";
		start <='1';
      wait for 20 ns;	
		start <='0';
		      wait for 60 ns;	
		dividend<="010101";
		divisor<="000110";
		start <='1';
		 wait for 20 ns;	
		start <='0';
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
