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
static unsigned int ng1[] = {63U, 0U};
static unsigned int ng2[] = {19U, 0U};
static unsigned int ng3[] = {43U, 0U};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(35, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003597940540_2752313125_init()
{
	static char *pe[] = {(void *)Initial_27_0};
	xsi_register_didat("work_m_00000000003597940540_2752313125", "isim/tb_paritiy3_isim_beh.exe.sim/work/m_00000000003597940540_2752313125.didat");
	xsi_register_executes(pe);
}
