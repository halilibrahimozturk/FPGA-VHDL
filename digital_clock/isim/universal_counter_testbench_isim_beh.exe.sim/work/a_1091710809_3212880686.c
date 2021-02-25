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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );


static void work_a_1091710809_3212880686_p_0(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3312);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(14, ng0);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 992U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(15, ng0);
    t7 = xsi_get_transient_memory(32U);
    memset(t7, 0, 32U);
    t11 = t7;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 3392);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5252U);
    t7 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t2, 1);
    t8 = (t17 + 12U);
    t18 = *((unsigned int *)t8);
    t19 = (1U * t18);
    t1 = (32U != t19);
    if (t1 == 1)
        goto LAB18;

LAB19:    t11 = (t0 + 3392);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 32U);
    xsi_driver_first_trans_fast(t11);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t2 = (t0 + 5252U);
    t11 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t8, t2, 1);
    t12 = (t17 + 12U);
    t18 = *((unsigned int *)t12);
    t19 = (1U * t18);
    t9 = (32U != t19);
    if (t9 == 1)
        goto LAB16;

LAB17:    t13 = (t0 + 3392);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t11, 32U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB16:    xsi_size_not_matching(32U, t19, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(32U, t19, 0);
    goto LAB19;

}


extern void work_a_1091710809_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1091710809_3212880686_p_0};
	xsi_register_didat("work_a_1091710809_3212880686", "isim/universal_counter_testbench_isim_beh.exe.sim/work/a_1091710809_3212880686.didat");
	xsi_register_executes(pe);
}
