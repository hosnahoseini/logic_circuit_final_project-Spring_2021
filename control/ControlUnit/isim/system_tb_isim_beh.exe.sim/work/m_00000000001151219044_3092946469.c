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
static const char *ng0 = "C:/Users/RAI/Desktop/university/term4/Lab DC/FinalProject/control/ControlUnit/ControlUnit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {7, 0};



static void Always_161_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t44[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4760);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);

LAB5:    xsi_set_current_line(164, ng0);
    t4 = (t0 + 2000U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB23;

LAB24:
LAB25:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(165, ng0);

LAB13:    xsi_set_current_line(166, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3520);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 3);
    goto LAB12;

LAB15:    xsi_set_current_line(170, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 3520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(173, ng0);

LAB26:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 2320U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t3) != 0)
        goto LAB29;

LAB30:    t8 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB31;

LAB32:    memcpy(t44, t6, 8);

LAB33:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t2) != 0)
        goto LAB50;

LAB51:    t7 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB52;

LAB53:    memcpy(t44, t6, 8);

LAB54:    t59 = (t44 + 4);
    t77 = *((unsigned int *)t59);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:
LAB47:    goto LAB25;

LAB19:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB25;

LAB21:    xsi_set_current_line(186, ng0);

LAB69:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 2480U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t3) = t14;
    memset(t31, 0, 8);
    t8 = (t6 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t8) != 0)
        goto LAB72;

LAB73:    t22 = (t31 + 4);
    t20 = *((unsigned int *)t31);
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB74;

LAB75:    memcpy(t44, t31, 8);

LAB76:    t58 = (t44 + 4);
    t70 = *((unsigned int *)t58);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    t2 = (t0 + 2440U);
    t5 = (t2 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t7, 2, t8, 32, 1);
    t21 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB91;

LAB88:    if (t18 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t31) = 1;

LAB91:    memset(t36, 0, 8);
    t35 = (t31 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t35) != 0)
        goto LAB94;

LAB95:    t43 = (t36 + 4);
    t32 = *((unsigned int *)t36);
    t33 = *((unsigned int *)t43);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB96;

LAB97:    memcpy(t84, t36, 8);

LAB98:    t85 = (t84 + 4);
    t77 = *((unsigned int *)t85);
    t78 = (~(t77));
    t79 = *((unsigned int *)t84);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB108:
LAB86:    goto LAB25;

LAB23:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB25;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB30;

LAB29:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB31:    t21 = (t0 + 2640U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t31, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t21);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t28);
    t23 = *((unsigned int *)t29);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t28);
    t27 = *((unsigned int *)t29);
    t32 = (t26 | t27);
    t33 = (~(t32));
    t34 = (t25 & t33);
    if (t34 != 0)
        goto LAB37;

LAB34:    if (t32 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t31) = 1;

LAB37:    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t37) != 0)
        goto LAB40;

LAB41:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t35 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t36) = 1;
    goto LAB41;

LAB40:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB41;

LAB42:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t6);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB44;

LAB45:    xsi_set_current_line(175, ng0);
    t82 = ((char*)((ng5)));
    t83 = (t0 + 3520);
    xsi_vlogvar_assign_value(t83, t82, 0, 0, 3);
    goto LAB47;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB50:    t5 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB51;

LAB52:    t8 = (t0 + 2640U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t31, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t22);
    t23 = *((unsigned int *)t28);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t32 = (t26 | t27);
    t33 = (~(t32));
    t34 = (t25 & t33);
    if (t34 != 0)
        goto LAB56;

LAB55:    if (t32 != 0)
        goto LAB57;

LAB58:    memset(t36, 0, 8);
    t35 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t35) != 0)
        goto LAB61;

LAB62:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t43 = (t6 + 4);
    t48 = (t36 + 4);
    t49 = (t44 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t48);
    t53 = (t51 | t52);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t49);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB56:    *((unsigned int *)t31) = 1;
    goto LAB58;

LAB57:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t36) = 1;
    goto LAB62;

LAB61:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB62;

LAB63:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t44) = (t56 | t57);
    t50 = (t6 + 4);
    t58 = (t36 + 4);
    t60 = *((unsigned int *)t6);
    t61 = (~(t60));
    t62 = *((unsigned int *)t50);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t58);
    t67 = (~(t66));
    t30 = (t61 & t63);
    t68 = (t65 & t67);
    t70 = (~(t30));
    t71 = (~(t68));
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB65;

LAB66:    xsi_set_current_line(177, ng0);
    t76 = ((char*)((ng6)));
    t82 = (t0 + 3520);
    xsi_vlogvar_assign_value(t82, t76, 0, 0, 3);
    goto LAB68;

LAB70:    *((unsigned int *)t31) = 1;
    goto LAB73;

LAB72:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB73;

LAB74:    t28 = (t0 + 2320U);
    t29 = *((char **)t28);
    memset(t36, 0, 8);
    t28 = (t29 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t27 = *((unsigned int *)t29);
    t32 = (t27 & t26);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t28) != 0)
        goto LAB79;

LAB80:    t34 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t36);
    t39 = (t34 & t38);
    *((unsigned int *)t44) = t39;
    t37 = (t31 + 4);
    t43 = (t36 + 4);
    t48 = (t44 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t43);
    t42 = (t40 | t41);
    *((unsigned int *)t48) = t42;
    t45 = *((unsigned int *)t48);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB76;

LAB77:    *((unsigned int *)t36) = 1;
    goto LAB80;

LAB79:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB80;

LAB81:    t47 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t48);
    *((unsigned int *)t44) = (t47 | t51);
    t49 = (t31 + 4);
    t50 = (t36 + 4);
    t52 = *((unsigned int *)t31);
    t53 = (~(t52));
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (~(t56));
    t60 = *((unsigned int *)t50);
    t61 = (~(t60));
    t68 = (t53 & t55);
    t69 = (t57 & t61);
    t62 = (~(t68));
    t63 = (~(t69));
    t64 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t64 & t62);
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & t63);
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t62);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t63);
    goto LAB83;

LAB84:    xsi_set_current_line(188, ng0);

LAB87:    xsi_set_current_line(189, ng0);
    t59 = ((char*)((ng7)));
    t76 = (t0 + 3200);
    xsi_vlogvar_assign_value(t76, t59, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 127U);
    t7 = (t0 + 3360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB86;

LAB90:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t36) = 1;
    goto LAB95;

LAB94:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB95;

LAB96:    t48 = (t0 + 2320U);
    t49 = *((char **)t48);
    memset(t44, 0, 8);
    t48 = (t49 + 4);
    t38 = *((unsigned int *)t48);
    t39 = (~(t38));
    t40 = *((unsigned int *)t49);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t48) != 0)
        goto LAB101;

LAB102:    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t44);
    t47 = (t45 & t46);
    *((unsigned int *)t84) = t47;
    t58 = (t36 + 4);
    t59 = (t44 + 4);
    t76 = (t84 + 4);
    t51 = *((unsigned int *)t58);
    t52 = *((unsigned int *)t59);
    t53 = (t51 | t52);
    *((unsigned int *)t76) = t53;
    t54 = *((unsigned int *)t76);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB98;

LAB99:    *((unsigned int *)t44) = 1;
    goto LAB102;

LAB101:    t50 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB102;

LAB103:    t56 = *((unsigned int *)t84);
    t57 = *((unsigned int *)t76);
    *((unsigned int *)t84) = (t56 | t57);
    t82 = (t36 + 4);
    t83 = (t44 + 4);
    t60 = *((unsigned int *)t36);
    t61 = (~(t60));
    t62 = *((unsigned int *)t82);
    t63 = (~(t62));
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t83);
    t67 = (~(t66));
    t30 = (t61 & t63);
    t68 = (t65 & t67);
    t70 = (~(t30));
    t71 = (~(t68));
    t72 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t72 & t70);
    t73 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t73 & t71);
    t74 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t74 & t70);
    t75 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t75 & t71);
    goto LAB105;

LAB106:    xsi_set_current_line(195, ng0);

LAB109:    xsi_set_current_line(196, ng0);
    t86 = ((char*)((ng7)));
    t87 = (t0 + 3040);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 127U);
    t7 = (t0 + 3360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB108;

}


extern void work_m_00000000001151219044_3092946469_init()
{
	static char *pe[] = {(void *)Always_161_0};
	xsi_register_didat("work_m_00000000001151219044_3092946469", "isim/system_tb_isim_beh.exe.sim/work/m_00000000001151219044_3092946469.didat");
	xsi_register_executes(pe);
}
