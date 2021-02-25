/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Windows/System32/digital_clock/universal_counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1631280120_3212880686_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 5712);
    t6 = (t0 + 3656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5652U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t16 = (1U * t15);
    t3 = (32U != t16);
    if (t3 == 1)
        goto LAB15;

LAB16:    t7 = (t0 + 3656);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    memcpy(t18, t5, 32U);
    xsi_driver_first_trans_fast(t7);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t2 = (t0 + 5652U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t7, t2, 1);
    t9 = (t14 + 12U);
    t15 = *((unsigned int *)t9);
    t16 = (1U * t15);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 3656);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

LAB13:    xsi_size_not_matching(32U, t16, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(32U, t16, 0);
    goto LAB16;

}

static void work_a_1631280120_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3576);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1631280120_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1631280120_3212880686_p_0,(void *)work_a_1631280120_3212880686_p_1};
	xsi_register_didat("work_a_1631280120_3212880686", "isim/sync_counter_tb_isim_beh.exe.sim/work/a_1631280120_3212880686.didat");
	xsi_register_executes(pe);
}
