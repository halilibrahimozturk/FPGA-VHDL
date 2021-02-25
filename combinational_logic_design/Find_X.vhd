----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:30:22 11/03/2020 
-- Design Name: 
-- Module Name:    Find_X - Behavioral 
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

entity Find_X is
    Port ( A1 : in  STD_LOGIC;
           B1 : in  STD_LOGIC;
           C1 : in  STD_LOGIC;
           D1 : in  STD_LOGIC;
           X1 : out  STD_LOGIC);
end Find_X;

architecture Behavioral of Find_X is
signal p1,p2,p3: std_logic;
begin

X1<= (B1 and (not C1) and D1) or (A1 and B1 and (not C1));

end Behavioral;