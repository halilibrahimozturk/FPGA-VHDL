----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:11:38 11/03/2020 
-- Design Name: 
-- Module Name:    Find_Z - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Find_Z is
    port ( U : in  std_logic_vector(3 downto 0);
           I : out  std_logic);
end Find_Z;

architecture Behavioral of Find_Z is

begin
  with U select
I<='1' when "0000",
   '0' when "0001",
	'1' when "0010",
	'1' when "0011",
	'0' when "0100",
	'0' when "0101",
	'0' when "0110",
	'1' when "0111",
	'0' when "1000",
	'0' when "1001",
	'0' when "1010",
	'0' when "1011",
	'1' when "1100",
	'0' when "1101",
	'1' when "1110",
	'0' when others;

end Behavioral;