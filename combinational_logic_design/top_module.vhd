----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:36:41 11/04/2020 
-- Design Name: 
-- Module Name:    top_module - Behavioral 
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

entity top_module is
    Port ( A3 : in  STD_LOGIC;
           B3 : in  STD_LOGIC;
           C3 : in  STD_LOGIC;
           D3 : in  STD_LOGIC;
           S0 : in  STD_LOGIC;
           S1 : in  STD_LOGIC;
           F : out  STD_LOGIC);
end top_module;

architecture Behavioral of top_module is
COMPONENT Find_X
    Port ( A1 : in  STD_LOGIC;
           B1 : in  STD_LOGIC;
           C1 : in  STD_LOGIC;
           D1 : in  STD_LOGIC;
           X1 : out  STD_LOGIC);
end COMPONENT;
COMPONENT Find_Y
    Port ( J : in  std_logic_vector(3 downto 0);
           L : out  std_logic_vector);
end COMPONENT;
COMPONENT Find_Z
    port ( U : in  std_logic_vector(3 downto 0);
           I : out  std_logic_vector);
end COMPONENT;
COMPONENT MUX
 port(
 
     A2,B2,C2,D2 : in STD_LOGIC;
     S0,S1: in STD_LOGIC;
     E: out STD_LOGIC
  );
end COMPONENT;
signal A,B,C,D,X: std_logic;
signal O,Y,Z: std_logic_vector;

begin
O<=A&B&C&D;
FX : Find_X port map (A,B,C,D,X);
FY : Find_Y port map (O,Y);
FZ : Find_Z port map (O,Z);
MX: MUX port map (X,Y,Z,0,S1,S0,F);
end Behavioral;