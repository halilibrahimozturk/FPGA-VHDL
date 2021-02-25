--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:28:59 12/02/2020
-- Design Name:   
-- Module Name:   C:/Windows/system32/digital_clock/universal_counter_testbench.vhd
-- Project Name:  digital_clock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: universal_counter
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
 
ENTITY universal_counter_testbench IS
END universal_counter_testbench;
 
ARCHITECTURE behavior OF universal_counter_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT universal_counter
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         up_down : IN  std_logic;
         enable : IN  std_logic;
         result : INOUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal up_down : std_logic := '0';
   signal enable : std_logic := '0';

	--BiDirs
   signal result : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: universal_counter PORT MAP (
          clk => clk,
          rst => rst,
          up_down => up_down,
          enable => enable,
          result => result
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
      rst<='0'; up_down<='0'	;

      wait for clk_period*10;
		
		rst<='0'; up_down<='1'	;

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
