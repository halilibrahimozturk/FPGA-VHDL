--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:42:58 01/07/2021
-- Design Name:   
-- Module Name:   C:/Windows/system32/vhdl_iterative_divider/test.vhd
-- Project Name:  vhdl_iterative_divider
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
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
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         start : IN  std_logic;
         dvsr : IN  std_logic_vector(7 downto 0);
         dvnd : IN  std_logic_vector(7 downto 0);
         ready : OUT  std_logic;
         done_tick : OUT  std_logic;
         curr_state_led : OUT  std_logic_vector(3 downto 0);
         quo : OUT  std_logic_vector(8 downto 0);
         rmd : OUT  std_logic_vector(8 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal start : std_logic := '0';
   signal dvsr : std_logic_vector(7 downto 0) := (others => '0');
   signal dvnd : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal ready : std_logic;
   signal done_tick : std_logic;
   signal curr_state_led : std_logic_vector(3 downto 0);
   signal quo : std_logic_vector(8 downto 0);
   signal rmd : std_logic_vector(8 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk => clk,
          reset => reset,
          start => start,
          dvsr => dvsr,
          dvnd => dvnd,
          ready => ready,
          done_tick => done_tick,
          curr_state_led => curr_state_led,
          quo => quo,
          rmd => rmd
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
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
