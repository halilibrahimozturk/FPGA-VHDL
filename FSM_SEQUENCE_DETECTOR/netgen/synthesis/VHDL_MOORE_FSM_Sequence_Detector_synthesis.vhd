--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: VHDL_MOORE_FSM_Sequence_Detector_synthesis.vhd
-- /___/   /\     Timestamp: Sat Dec 26 02:32:32 2020
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm VHDL_MOORE_FSM_Sequence_Detector -w -dir netgen/synthesis -ofmt vhdl -sim VHDL_MOORE_FSM_Sequence_Detector.ngc VHDL_MOORE_FSM_Sequence_Detector_synthesis.vhd 
-- Device	: xc7a100t-3-csg324
-- Input file	: VHDL_MOORE_FSM_Sequence_Detector.ngc
-- Output file	: C:\Windows\System32\FSM_SEQUENCE_DETECTOR\netgen\synthesis\VHDL_MOORE_FSM_Sequence_Detector_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: VHDL_MOORE_FSM_Sequence_Detector
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity VHDL_MOORE_FSM_Sequence_Detector is
  port (
    clock : in STD_LOGIC := 'X'; 
    reset : in STD_LOGIC := 'X'; 
    inp : in STD_LOGIC := 'X'; 
    enable : in STD_LOGIC := 'X'; 
    count : inout STD_LOGIC_VECTOR ( 3 downto 0 ); 
    sequence : inout STD_LOGIC_VECTOR ( 7 downto 0 ) 
  );
end VHDL_MOORE_FSM_Sequence_Detector;

architecture Structure of VHDL_MOORE_FSM_Sequence_Detector is
  signal clock_BUFGP_0 : STD_LOGIC; 
  signal reset_IBUF_1 : STD_LOGIC; 
  signal inp_IBUF_2 : STD_LOGIC; 
  signal enable_BUFGP_3 : STD_LOGIC; 
  signal sequence_7_4 : STD_LOGIC; 
  signal sequence_6_5 : STD_LOGIC; 
  signal sequence_5_6 : STD_LOGIC; 
  signal sequence_4_7 : STD_LOGIC; 
  signal sequence_3_8 : STD_LOGIC; 
  signal sequence_2_9 : STD_LOGIC; 
  signal sequence_1_10 : STD_LOGIC; 
  signal sequence_0_11 : STD_LOGIC; 
  signal current_state_2_X_5_o_wide_mux_7_OUT_1_Q : STD_LOGIC; 
  signal current_state_2_X_5_o_wide_mux_7_OUT_2_Q : STD_LOGIC; 
  signal next_state_2_17 : STD_LOGIC; 
  signal next_state_1_18 : STD_LOGIC; 
  signal next_state_0_19 : STD_LOGIC; 
  signal current_state_2_X_5_o_Mux_25_o : STD_LOGIC; 
  signal current_state_2_X_5_o_Mux_21_o : STD_LOGIC; 
  signal current_state_2_X_5_o_wide_mux_7_OUT_0_Q : STD_LOGIC; 
  signal current_state_2_PWR_6_o_Mux_20_o : STD_LOGIC; 
  signal current_state_2_X_5_o_Mux_19_o : STD_LOGIC; 
  signal current_state_2_X_5_o_Mux_23_o : STD_LOGIC; 
  signal count_0_26 : STD_LOGIC; 
  signal count_1_27 : STD_LOGIC; 
  signal count_2_28 : STD_LOGIC; 
  signal count_3_29 : STD_LOGIC; 
  signal sequence_0_1_46 : STD_LOGIC; 
  signal current_state : STD_LOGIC_VECTOR ( 2 downto 0 ); 
begin
  sequence_0 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => inp_IBUF_2,
      Q => sequence_0_11
    );
  sequence_1 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_0_11,
      Q => sequence_1_10
    );
  sequence_2 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_1_10,
      Q => sequence_2_9
    );
  sequence_3 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_2_9,
      Q => sequence_3_8
    );
  sequence_4 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_3_8,
      Q => sequence_4_7
    );
  sequence_5 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_4_7,
      Q => sequence_5_6
    );
  sequence_6 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_5_6,
      Q => sequence_6_5
    );
  sequence_7 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => sequence_6_5,
      Q => sequence_7_4
    );
  next_state_2 : LD
    generic map(
      INIT => '0'
    )
    port map (
      D => current_state_2_X_5_o_wide_mux_7_OUT_2_Q,
      G => enable_BUFGP_3,
      Q => next_state_2_17
    );
  next_state_0 : LD
    generic map(
      INIT => '0'
    )
    port map (
      D => current_state_2_X_5_o_wide_mux_7_OUT_0_Q,
      G => enable_BUFGP_3,
      Q => next_state_0_19
    );
  next_state_1 : LD
    generic map(
      INIT => '0'
    )
    port map (
      D => current_state_2_X_5_o_wide_mux_7_OUT_1_Q,
      G => enable_BUFGP_3,
      Q => next_state_1_18
    );
  current_state_0 : FDC
    generic map(
      INIT => '0'
    )
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => next_state_0_19,
      Q => current_state(0)
    );
  current_state_1 : FDC
    generic map(
      INIT => '0'
    )
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => next_state_1_18,
      Q => current_state(1)
    );
  current_state_2 : FDC
    generic map(
      INIT => '0'
    )
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => next_state_2_17,
      Q => current_state(2)
    );
  count_3 : LD
    port map (
      D => current_state_2_X_5_o_Mux_19_o,
      G => current_state_2_PWR_6_o_Mux_20_o,
      Q => count_3_29
    );
  count_2 : LD
    port map (
      D => current_state_2_X_5_o_Mux_21_o,
      G => current_state_2_PWR_6_o_Mux_20_o,
      Q => count_2_28
    );
  count_1 : LD
    port map (
      D => current_state_2_X_5_o_Mux_23_o,
      G => current_state_2_PWR_6_o_Mux_20_o,
      Q => count_1_27
    );
  count_0 : LD
    port map (
      D => current_state_2_X_5_o_Mux_25_o,
      G => current_state_2_PWR_6_o_Mux_20_o,
      Q => count_0_26
    );
  Mmux_current_state_2_X_5_o_wide_mux_7_OUT_2_11 : LUT4
    generic map(
      INIT => X"2000"
    )
    port map (
      I0 => inp_IBUF_2,
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => current_state(0),
      O => current_state_2_X_5_o_wide_mux_7_OUT_2_Q
    );
  Mmux_current_state_2_X_5_o_Mux_25_o11 : LUT2
    generic map(
      INIT => X"2"
    )
    port map (
      I0 => current_state(2),
      I1 => count_0_26,
      O => current_state_2_X_5_o_Mux_25_o
    );
  Mmux_current_state_2_PWR_6_o_Mux_20_o11 : LUT5
    generic map(
      INIT => X"FFFF0001"
    )
    port map (
      I0 => count_3_29,
      I1 => count_2_28,
      I2 => count_1_27,
      I3 => count_0_26,
      I4 => current_state(2),
      O => current_state_2_PWR_6_o_Mux_20_o
    );
  Mmux_current_state_2_X_5_o_wide_mux_7_OUT_0_11 : LUT4
    generic map(
      INIT => X"0110"
    )
    port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => inp_IBUF_2,
      O => current_state_2_X_5_o_wide_mux_7_OUT_0_Q
    );
  Mmux_current_state_2_X_5_o_Mux_23_o11 : LUT3
    generic map(
      INIT => X"28"
    )
    port map (
      I0 => current_state(2),
      I1 => count_0_26,
      I2 => count_1_27,
      O => current_state_2_X_5_o_Mux_23_o
    );
  Mmux_current_state_2_X_5_o_wide_mux_7_OUT_1_11 : LUT4
    generic map(
      INIT => X"8BA8"
    )
    port map (
      I0 => inp_IBUF_2,
      I1 => current_state(2),
      I2 => current_state(0),
      I3 => current_state(1),
      O => current_state_2_X_5_o_wide_mux_7_OUT_1_Q
    );
  current_state_2_X_5_o_Mux_21_o1 : LUT4
    generic map(
      INIT => X"2888"
    )
    port map (
      I0 => current_state(2),
      I1 => count_2_28,
      I2 => count_0_26,
      I3 => count_1_27,
      O => current_state_2_X_5_o_Mux_21_o
    );
  current_state_2_X_5_o_Mux_19_o1 : LUT5
    generic map(
      INIT => X"28A0A0A0"
    )
    port map (
      I0 => current_state(2),
      I1 => count_2_28,
      I2 => count_3_29,
      I3 => count_0_26,
      I4 => count_1_27,
      O => current_state_2_X_5_o_Mux_19_o
    );
  reset_IBUF : IBUF
    port map (
      I => reset,
      O => reset_IBUF_1
    );
  inp_IBUF : IBUF
    port map (
      I => inp,
      O => inp_IBUF_2
    );
  count_3_OBUF : OBUF
    port map (
      I => count_3_29,
      O => count(3)
    );
  count_2_OBUF : OBUF
    port map (
      I => count_2_28,
      O => count(2)
    );
  count_1_OBUF : OBUF
    port map (
      I => count_1_27,
      O => count(1)
    );
  count_0_OBUF : OBUF
    port map (
      I => count_0_26,
      O => count(0)
    );
  sequence_7_OBUF : OBUF
    port map (
      I => sequence_7_4,
      O => sequence(7)
    );
  sequence_6_OBUF : OBUF
    port map (
      I => sequence_6_5,
      O => sequence(6)
    );
  sequence_5_OBUF : OBUF
    port map (
      I => sequence_5_6,
      O => sequence(5)
    );
  sequence_4_OBUF : OBUF
    port map (
      I => sequence_4_7,
      O => sequence(4)
    );
  sequence_3_OBUF : OBUF
    port map (
      I => sequence_3_8,
      O => sequence(3)
    );
  sequence_2_OBUF : OBUF
    port map (
      I => sequence_2_9,
      O => sequence(2)
    );
  sequence_1_OBUF : OBUF
    port map (
      I => sequence_1_10,
      O => sequence(1)
    );
  sequence_0_OBUF : OBUF
    port map (
      I => sequence_0_1_46,
      O => sequence(0)
    );
  clock_BUFGP : BUFGP
    port map (
      I => clock,
      O => clock_BUFGP_0
    );
  enable_BUFGP : BUFGP
    port map (
      I => enable,
      O => enable_BUFGP_3
    );
  sequence_0_1 : FDC
    port map (
      C => clock_BUFGP_0,
      CLR => reset_IBUF_1,
      D => inp_IBUF_2,
      Q => sequence_0_1_46
    );

end Structure;

