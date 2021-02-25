----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:42:49 11/03/2020 
-- Design Name: 
-- Module Name:    Find_Y - Behavioral 
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

entity Find_Y is
    Port ( J : in  std_logic_vector(3 downto 0);
           L : out  std_logic);
end Find_Y;

architecture Behavioral of Find_Y is

begin 

L<='0' when (J="0000")else
   '1' when (J="0001")else
	'0' when (J="0010")else
	'0' when (J="0011")else
	'1' when (J="0100")else
	'1' when (J="0101")else
	'0' when (J="0110")else
	'0' when (J="0111")else
	'0' when (J="1000")else
	'1' when (J="1001")else
	'0' when (J="1010")else
	'1' when (J="1011")else
	'0' when (J="1100")else
	'0' when (J="1101")else
	'0' when (J="1110")else
	'1' ;
end Behavioral;