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
static const char *ng0 = "C:/Windows/System32/vhdl_iterative_divider/iterative_divider.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);


static void work_a_1767222536_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 7568);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 7632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 7696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 7760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (t0 + 7568);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7696);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 7760);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 7824);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

}

static void work_a_1767222536_1446275585_p_1(char *t0)
{
    char t12[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    char *t27;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 12821);
    t3 = (t0 + 7888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 8016);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 8144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 8208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 8272);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 8336);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7440);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 12825);
    t5 = (t0 + 7888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 7952);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 12829);
    t3 = (t0 + 7888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t13 = (8 - 2);
    t14 = (7 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = (t0 + 4392U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t17 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 6;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t18 = (0 - 6);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t19;
    t3 = xsi_base_array_concat(t3, t12, t5, (char)97, t1, t17, (char)99, t8, (char)101);
    t19 = (7U + 1U);
    t11 = (8U != t19);
    if (t11 == 1)
        goto LAB12;

LAB13:    t7 = (t0 + 8208);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t13 = (8 - 2);
    t14 = (7 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t18 = (8 - 1);
    t22 = (t18 - 7);
    t19 = (t22 * -1);
    t23 = (1U * t19);
    t24 = (0 + t23);
    t3 = (t4 + t24);
    t8 = *((unsigned char *)t3);
    t6 = ((IEEE_P_1242562249) + 3000);
    t7 = (t17 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 6;
    t9 = (t7 + 4U);
    *((int *)t9) = 0;
    t9 = (t7 + 8U);
    *((int *)t9) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t26;
    t5 = xsi_base_array_concat(t5, t12, t6, (char)97, t1, t17, (char)99, t8, (char)101);
    t26 = (7U + 1U);
    t11 = (8U != t26);
    if (t11 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 8144);
    t10 = (t9 + 56U);
    t20 = *((char **)t10);
    t21 = (t20 + 56U);
    t27 = *((char **)t21);
    memcpy(t27, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 12660U);
    t3 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t14 = *((unsigned int *)t4);
    t15 = (1U * t14);
    t8 = (4U != t15);
    if (t8 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 8336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 12660U);
    t8 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t8 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB5:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 12833);
    t3 = (t0 + 7888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t13 = (8 - 2);
    t14 = (7 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = (t0 + 4392U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t17 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 6;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t18 = (0 - 6);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t19;
    t3 = xsi_base_array_concat(t3, t12, t5, (char)97, t1, t17, (char)99, t8, (char)101);
    t19 = (7U + 1U);
    t11 = (8U != t19);
    if (t11 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 8208);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 8144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 12837);
    t3 = (t0 + 7888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8016);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 8144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 8272);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t13 = (8 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, t13, 4);
    t8 = (4U != 4U);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 8336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 8080);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(8U, t19, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t26, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(4U, t15, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 8080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB19;

LAB21:    xsi_size_not_matching(8U, t19, 0);
    goto LAB22;

}

static void work_a_1767222536_1446275585_p_2(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12596U);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t3 = (t0 + 12644U);
    t5 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 8400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 7456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
    t7 = (t0 + 2952U);
    t8 = *((char **)t7);
    t7 = (t0 + 12596U);
    t9 = (t0 + 3752U);
    t10 = *((char **)t9);
    t9 = (t0 + 12644U);
    t11 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t6, t8, t7, t10, t9);
    t12 = (t6 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (8U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 8400);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 8464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t14, 0);
    goto LAB6;

}

static void work_a_1767222536_1446275585_p_3(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(115, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 12676U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)97, t2, t5, (char)99, (unsigned char)3, (char)101);
    t6 = (7U + 1U);
    t7 = (9U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 8528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7472);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t6, 0);
    goto LAB6;

}

static void work_a_1767222536_1446275585_p_4(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(116, ng0);

LAB3:    t1 = (t0 + 12841);
    t3 = (t0 + 4712U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 12692U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (4U + 4U);
    t12 = (9U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 8592);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 9U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7488);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t11, 0);
    goto LAB6;

}


extern void work_a_1767222536_1446275585_init()
{
	static char *pe[] = {(void *)work_a_1767222536_1446275585_p_0,(void *)work_a_1767222536_1446275585_p_1,(void *)work_a_1767222536_1446275585_p_2,(void *)work_a_1767222536_1446275585_p_3,(void *)work_a_1767222536_1446275585_p_4};
	xsi_register_didat("work_a_1767222536_1446275585", "isim/test2_isim_beh.exe.sim/work/a_1767222536_1446275585.didat");
	xsi_register_executes(pe);
}
