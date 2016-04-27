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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Chris/Documents/CompE470/Homework5/Homework5_Stack/Question1.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Always_15_0(char *t0)
{
    char t13[8];
    char t16[8];
    char t23[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t25;
    int t26;
    int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);

LAB10:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 1480U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t4, 1, t3, 1);

LAB11:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t14 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t14 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t14 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(16, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(19, ng0);

LAB21:    xsi_set_current_line(20, ng0);
    t5 = (t0 + 2280U);
    t11 = *((char **)t5);
    t5 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(22, ng0);

LAB25:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3160);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 3160);
    t17 = (t15 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2840);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t16, 3, t4, t12, t18, 2, 1, t21, 2, 2);
    t22 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t22, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t4, 2, t5, 32);
    t11 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 2, 0LL);

LAB24:    goto LAB20;

LAB14:    xsi_set_current_line(28, ng0);

LAB26:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(31, ng0);

LAB30:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3160);
    t4 = (t0 + 3160);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3160);
    t15 = (t12 + 64U);
    t17 = *((char **)t15);
    t18 = (t0 + 2840);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t20, 2, t21, 32);
    xsi_vlog_generic_convert_array_indices(t16, t23, t11, t17, 2, 1, t24, 32, 2);
    t22 = (t16 + 4);
    t6 = *((unsigned int *)t22);
    t14 = (!(t6));
    t25 = (t23 + 4);
    t7 = *((unsigned int *)t25);
    t26 = (!(t7));
    t27 = (t14 && t26);
    if (t27 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 2, t5, 32);
    t11 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 2, 0LL);

LAB29:    goto LAB20;

LAB16:    xsi_set_current_line(37, ng0);

LAB33:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(21, ng0);
    t12 = ((char*)((ng3)));
    t15 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 1, 0LL);
    goto LAB24;

LAB27:    xsi_set_current_line(30, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    goto LAB29;

LAB31:    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t23);
    t28 = (t8 - t9);
    t29 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t23), t29, 0LL);
    goto LAB32;

}

static void Cont_44_1(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB7:    t12 = (t0 + 5008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 4912);
    *((int *)t25) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

}

static void Cont_45_2(char *t0)
{
    char t6[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 5072);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 4928);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}


extern void work_m_00000000004270084643_1940893384_init()
{
	static char *pe[] = {(void *)Always_15_0,(void *)Cont_44_1,(void *)Cont_45_2};
	xsi_register_didat("work_m_00000000004270084643_1940893384", "isim/tb_question1_isim_beh.exe.sim/work/m_00000000004270084643_1940893384.didat");
	xsi_register_executes(pe);
}
