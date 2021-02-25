library IEEE;
use IEEE.STD_LOGIC_1164.all;
 
entity MUX is
 port(
 
     A2,B2,C2,D2 : in STD_LOGIC;
     S0,S1: in STD_LOGIC;
     E: out STD_LOGIC
  );
end MUX;
 
architecture bhv of MUX is
begin
process (A2,B2,C2,D2,S0,S1) is
begin
  if (S0 ='0' and S1 = '0') then
      E <= A2;
  elsif (S0 ='1' and S1 = '0') then
      E <= B2;
  elsif (S0 ='0' and S1 = '1') then
      E <= C2;
  else
      E <= D2;
  end if;
 
end process;
end bhv;