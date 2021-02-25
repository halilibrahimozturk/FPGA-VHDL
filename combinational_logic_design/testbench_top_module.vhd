--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:23:32 11/04/2020
-- Design Name:   
-- Module Name:   E:/combinational/testbench_top.vhd
-- Project Name:  combinational
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top_module
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
 
ENTITY testbench_top IS
END testbench_top;
 
ARCHITECTURE behavior OF testbench_top IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_module
    PORT(
         A3 : IN  std_logic;
         B3 : IN  std_logic;
         C3 : IN  std_logic;
         D3 : IN  std_logic;
         S0 : IN  std_logic;
         S1 : IN  std_logic;
         F : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A3 : std_logic := '0';
   signal B3 : std_logic := '0';
   signal C3 : std_logic := '0';
   signal D3 : std_logic := '0';
   signal S0 : std_logic := '0';
   signal S1 : std_logic := '0';

 	--Outputs
   signal F : std_logic;
   signal clk : std_logic;
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_module PORT MAP (
          A3 => A3,
          B3 => B3,
          C3 => C3,
          D3 => D3,
          S0 => S0,
          S1 => S1,
          F => F
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
      wait for 10 ns;	
		A3 <= '1';
		B3 <= '1';
		C3 <= '0';
		D3 <= '0';
		S0 <= '0';
		S1 <= '0';
		wait for 10 ns;	
		S0 <= '0';
		S1 <= '1';
		wait for 10 ns;	
		S0 <= '1';
		S1 <= '0';
		wait for 10 ns;	
		S0 <= '1';
		S1 <= '1';

      -- insert stimulus here 

      wait;
   end process;

END;