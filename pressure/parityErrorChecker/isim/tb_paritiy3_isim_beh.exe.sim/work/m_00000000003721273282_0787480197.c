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
static const char *ng0 = "C:/Users/RAI/Desktop/university/term4/Lab DC/FinalProject/pressure/parityErrorChecker/parityErrorChecker.v";



static void Cont_46_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = 1;
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t4);
    t7 = (t7 & 1);
    if (*((unsigned int *)t2) != 0)
        goto LAB4;

LAB5:    t9 = 0;

LAB7:    t10 = (t9 <= 5);
    if (t10 == 1)
        goto LAB8;

LAB9:    t12 = (!(t7));
    *((unsigned int *)t3) = t12;

LAB6:    t13 = (t0 + 2768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 2688);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    t8 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

LAB8:    if (t5 == 1)
        goto LAB11;

LAB12:    t11 = (t6 & 1);
    t7 = (t7 ^ t11);

LAB13:    t6 = (t6 >> 1);

LAB10:    t9 = (t9 + 1);
    goto LAB7;

LAB11:    t5 = 0;
    goto LAB13;

}


extern void work_m_00000000003721273282_0787480197_init()
{
	static char *pe[] = {(void *)Cont_46_0};
	xsi_register_didat("work_m_00000000003721273282_0787480197", "isim/tb_paritiy3_isim_beh.exe.sim/work/m_00000000003721273282_0787480197.didat");
	xsi_register_executes(pe);
}
