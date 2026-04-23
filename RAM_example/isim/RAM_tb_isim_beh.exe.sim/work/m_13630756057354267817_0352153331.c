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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Shared_drive_for_ECE_4375/RAM_example/RAM_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {5U, 0U};
static int ng4[] = {1, 0};



static void Initial_47_0(char *t0)
{
    char t6[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB14;

LAB15:    goto LAB1;

LAB7:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 15U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 15U);
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 15U);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t2, 4, t6, 4);
    t15 = (t0 + 1448);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB14:    xsi_set_current_line(69, ng0);

LAB16:    xsi_set_current_line(70, ng0);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 15U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 15U);
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

}


extern void work_m_13630756057354267817_0352153331_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	xsi_register_didat("work_m_13630756057354267817_0352153331", "isim/RAM_tb_isim_beh.exe.sim/work/m_13630756057354267817_0352153331.didat");
	xsi_register_executes(pe);
}
