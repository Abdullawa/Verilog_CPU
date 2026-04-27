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
static const char *ng0 = "%0t\t%b\t%b\t%0d\t%h\t%h\t%0d\t%b\t%h\t%h\t%b";
static const char *ng1 = "/home/ise/Shared_drive_for_ECE_4375/CPU/CPU_tb.v";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {64, 0};
static unsigned int ng6[] = {0U, 0U, 0U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {5U, 0U, 4097U, 0U};
static unsigned int ng9[] = {3U, 0U, 4098U, 0U};
static unsigned int ng10[] = {2U, 0U, 12323U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {1U, 0U, 16484U, 0U};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {6U, 0U, 20613U, 0U};
static int ng15[] = {4, 0};
static unsigned int ng16[] = {1U, 0U, 24742U, 0U};
static int ng17[] = {5, 0};
static unsigned int ng18[] = {7U, 0U, 28871U, 0U};
static int ng19[] = {6, 0};
static unsigned int ng20[] = {1U, 0U, 37096U, 0U};
static int ng21[] = {7, 0};
static unsigned int ng22[] = {1U, 0U, 41225U, 0U};
static int ng23[] = {8, 0};
static unsigned int ng24[] = {2U, 0U, 73728U, 0U};
static int ng25[] = {9, 0};
static unsigned int ng26[] = {99U, 0U, 4106U, 0U};
static int ng27[] = {10, 0};
static unsigned int ng28[] = {55U, 0U, 4107U, 0U};
static int ng29[] = {11, 0};
static unsigned int ng30[] = {42U, 0U, 4108U, 0U};
static int ng31[] = {12, 0};
static unsigned int ng32[] = {17U, 0U};
static unsigned int ng33[] = {34U, 0U};
static const char *ng34 = "time\tclk\trst\tpc\trom_word\t\tir\t\trd\tload\talu_result\twrite_data\twrite_en";
static const char *ng35 = "DBG : ir=%h rd=%0d rs1=%0d imm=%0d load=%b bus_a=%0d bus_b=%0d alu=%0d write=%0d";
static const char *ng36 = "REGS: R1=%0d R2=%0d R3=%0d R4=%0d R5=%0d R6=%0d R7=%0d R8=%0d R9=%0d R10=%0d R12=%0d";

void Monitor_77_5(char *);
void Monitor_77_5(char *);


static void Monitor_77_5_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 2248);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 7488);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 7504);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 40U);
    t20 = *((char **)t19);
    t19 = (t0 + 7528);
    t21 = *((char **)t19);
    t22 = ((((char*)(t21))) + 40U);
    t23 = *((char **)t22);
    t22 = (t0 + 7552);
    t24 = *((char **)t22);
    t25 = ((((char*)(t24))) + 40U);
    t26 = *((char **)t25);
    t25 = (t0 + 7576);
    t27 = *((char **)t25);
    t28 = ((((char*)(t27))) + 40U);
    t29 = *((char **)t28);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 3, ng0, 12, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 1, (char)118, t10, 6, (char)118, t12, 49, (char)118, t16, 49, (char)118, t20, 5, (char)118, t23, 1, (char)118, t26, 32, (char)118, t29, 32, (char)118, t30, 1);

LAB1:    return;
}

static void Initial_29_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng1);

LAB4:    xsi_set_current_line(30, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng1);

LAB5:    xsi_set_current_line(31, ng1);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(31, ng1);
    t3 = (t0 + 1928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_34_1(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
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
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng1);

LAB4:    xsi_set_current_line(35, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng1);
    xsi_set_current_line(37, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng1);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(45, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(48, ng1);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(51, ng1);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng1);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng29)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(54, ng1);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2568);
    t14 = (t13 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng31)));
    xsi_vlog_generic_convert_array_indices(t6, t15, t7, t17, 2, 1, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(56, ng1);
    t2 = (t0 + 3696);
    xsi_process_wait(t2, 12000LL);
    *((char **)t1) = &&LAB36;

LAB1:    return;
LAB6:    xsi_set_current_line(38, ng1);
    t13 = ((char*)((ng6)));
    t14 = (t0 + 2568);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(37, ng1);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t36);
    goto LAB9;

LAB10:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB11;

LAB12:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB13;

LAB14:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB15;

LAB16:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB17;

LAB18:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB19;

LAB20:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB21;

LAB22:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB23;

LAB24:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB25;

LAB26:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB27;

LAB28:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB29;

LAB30:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB31;

LAB32:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB33;

LAB34:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t15);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB35;

LAB36:    xsi_set_current_line(57, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 3696);
    xsi_process_wait(t2, 160000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(60, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_63_2(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng1);
    t2 = (t0 + 5448);
    *((int *)t2) = 1;
    t3 = (t0 + 4168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng1);

LAB5:    xsi_set_current_line(64, ng1);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2568);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 49, t6, t10, t13, 2, 1, t15, 6, 2);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 49);
    goto LAB2;

}

static void Always_67_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng1);
    t2 = (t0 + 5464);
    *((int *)t2) = 1;
    t3 = (t0 + 4416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng1);

LAB5:    xsi_set_current_line(68, ng1);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng1);
    t7 = ((char*)((ng32)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(70, ng1);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB13;

}

static void Initial_75_4(char *t0)
{

LAB0:    xsi_set_current_line(75, ng1);

LAB2:    xsi_set_current_line(76, ng1);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);
    xsi_set_current_line(77, ng1);
    Monitor_77_5(t0);

LAB1:    return;
}

static void Always_83_6(char *t0)
{
    char t4[8];
    char t50[8];
    char t51[8];
    char t58[8];
    char t72[8];
    char t86[8];
    char t100[8];
    char t114[8];
    char t128[8];
    char t142[8];
    char t156[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
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
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng1);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 4912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng1);

LAB5:    xsi_set_current_line(84, ng1);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(84, ng1);

LAB13:    xsi_set_current_line(85, ng1);
    t21 = (t0 + 7592);
    t22 = *((char **)t21);
    t23 = ((((char*)(t22))) + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 7608);
    t26 = *((char **)t25);
    t27 = ((((char*)(t26))) + 40U);
    t28 = *((char **)t27);
    t27 = (t0 + 7624);
    t29 = *((char **)t27);
    t30 = ((((char*)(t29))) + 40U);
    t31 = *((char **)t30);
    t30 = (t0 + 7648);
    t32 = *((char **)t30);
    t33 = ((((char*)(t32))) + 40U);
    t34 = *((char **)t33);
    t33 = (t0 + 7672);
    t35 = *((char **)t33);
    t36 = ((((char*)(t35))) + 40U);
    t37 = *((char **)t36);
    t36 = (t0 + 7696);
    t38 = *((char **)t36);
    t39 = ((((char*)(t38))) + 40U);
    t40 = *((char **)t39);
    t39 = (t0 + 7720);
    t41 = *((char **)t39);
    t42 = ((((char*)(t41))) + 40U);
    t43 = *((char **)t42);
    t42 = (t0 + 7744);
    t44 = *((char **)t42);
    t45 = ((((char*)(t44))) + 40U);
    t46 = *((char **)t45);
    t45 = (t0 + 7768);
    t47 = *((char **)t45);
    t48 = ((((char*)(t47))) + 40U);
    t49 = *((char **)t48);
    xsi_vlogfile_write(1, 0, 0, ng35, 10, t0, (char)118, t24, 49, (char)118, t28, 5, (char)118, t31, 5, (char)118, t34, 32, (char)118, t37, 1, (char)118, t40, 32, (char)118, t43, 32, (char)118, t46, 32, (char)118, t49, 32);
    xsi_set_current_line(88, ng1);
    t2 = (t0 + 7800);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 7832);
    t8 = *((char **)t7);
    t14 = ((((char*)(t8))) + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 7864);
    t22 = *((char **)t21);
    t23 = ((((char*)(t22))) + 64U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t15, t24, 2, 1, t25, 32, 1);
    t26 = (t0 + 7896);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 7928);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 7960);
    t35 = *((char **)t34);
    t36 = ((((char*)(t35))) + 64U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t50, 32, t29, t33, t37, 2, 1, t38, 32, 1);
    t39 = (t0 + 7992);
    t40 = *((char **)t39);
    t41 = ((((char*)(t40))) + 56U);
    t42 = *((char **)t41);
    t43 = (t0 + 8024);
    t44 = *((char **)t43);
    t45 = ((((char*)(t44))) + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 8056);
    t48 = *((char **)t47);
    t49 = ((((char*)(t48))) + 64U);
    t52 = *((char **)t49);
    t53 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t51, 32, t42, t46, t52, 2, 1, t53, 32, 1);
    t54 = (t0 + 8088);
    t55 = *((char **)t54);
    t56 = ((((char*)(t55))) + 56U);
    t57 = *((char **)t56);
    t59 = (t0 + 8120);
    t60 = *((char **)t59);
    t61 = ((((char*)(t60))) + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 8152);
    t64 = *((char **)t63);
    t65 = ((((char*)(t64))) + 64U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t58, 32, t57, t62, t66, 2, 1, t67, 32, 1);
    t68 = (t0 + 8184);
    t69 = *((char **)t68);
    t70 = ((((char*)(t69))) + 56U);
    t71 = *((char **)t70);
    t73 = (t0 + 8216);
    t74 = *((char **)t73);
    t75 = ((((char*)(t74))) + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 8248);
    t78 = *((char **)t77);
    t79 = ((((char*)(t78))) + 64U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t72, 32, t71, t76, t80, 2, 1, t81, 32, 1);
    t82 = (t0 + 8280);
    t83 = *((char **)t82);
    t84 = ((((char*)(t83))) + 56U);
    t85 = *((char **)t84);
    t87 = (t0 + 8312);
    t88 = *((char **)t87);
    t89 = ((((char*)(t88))) + 72U);
    t90 = *((char **)t89);
    t91 = (t0 + 8344);
    t92 = *((char **)t91);
    t93 = ((((char*)(t92))) + 64U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t86, 32, t85, t90, t94, 2, 1, t95, 32, 1);
    t96 = (t0 + 8376);
    t97 = *((char **)t96);
    t98 = ((((char*)(t97))) + 56U);
    t99 = *((char **)t98);
    t101 = (t0 + 8408);
    t102 = *((char **)t101);
    t103 = ((((char*)(t102))) + 72U);
    t104 = *((char **)t103);
    t105 = (t0 + 8440);
    t106 = *((char **)t105);
    t107 = ((((char*)(t106))) + 64U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng21)));
    xsi_vlog_generic_get_array_select_value(t100, 32, t99, t104, t108, 2, 1, t109, 32, 1);
    t110 = (t0 + 8472);
    t111 = *((char **)t110);
    t112 = ((((char*)(t111))) + 56U);
    t113 = *((char **)t112);
    t115 = (t0 + 8504);
    t116 = *((char **)t115);
    t117 = ((((char*)(t116))) + 72U);
    t118 = *((char **)t117);
    t119 = (t0 + 8536);
    t120 = *((char **)t119);
    t121 = ((((char*)(t120))) + 64U);
    t122 = *((char **)t121);
    t123 = ((char*)((ng23)));
    xsi_vlog_generic_get_array_select_value(t114, 32, t113, t118, t122, 2, 1, t123, 32, 1);
    t124 = (t0 + 8568);
    t125 = *((char **)t124);
    t126 = ((((char*)(t125))) + 56U);
    t127 = *((char **)t126);
    t129 = (t0 + 8600);
    t130 = *((char **)t129);
    t131 = ((((char*)(t130))) + 72U);
    t132 = *((char **)t131);
    t133 = (t0 + 8632);
    t134 = *((char **)t133);
    t135 = ((((char*)(t134))) + 64U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng25)));
    xsi_vlog_generic_get_array_select_value(t128, 32, t127, t132, t136, 2, 1, t137, 32, 1);
    t138 = (t0 + 8664);
    t139 = *((char **)t138);
    t140 = ((((char*)(t139))) + 56U);
    t141 = *((char **)t140);
    t143 = (t0 + 8696);
    t144 = *((char **)t143);
    t145 = ((((char*)(t144))) + 72U);
    t146 = *((char **)t145);
    t147 = (t0 + 8728);
    t148 = *((char **)t147);
    t149 = ((((char*)(t148))) + 64U);
    t150 = *((char **)t149);
    t151 = ((char*)((ng27)));
    xsi_vlog_generic_get_array_select_value(t142, 32, t141, t146, t150, 2, 1, t151, 32, 1);
    t152 = (t0 + 8760);
    t153 = *((char **)t152);
    t154 = ((((char*)(t153))) + 56U);
    t155 = *((char **)t154);
    t157 = (t0 + 8792);
    t158 = *((char **)t157);
    t159 = ((((char*)(t158))) + 72U);
    t160 = *((char **)t159);
    t161 = (t0 + 8824);
    t162 = *((char **)t161);
    t163 = ((((char*)(t162))) + 64U);
    t164 = *((char **)t163);
    t165 = ((char*)((ng31)));
    xsi_vlog_generic_get_array_select_value(t156, 32, t155, t160, t164, 2, 1, t165, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng36, 12, t0, (char)118, t4, 32, (char)118, t50, 32, (char)118, t51, 32, (char)118, t58, 32, (char)118, t72, 32, (char)118, t86, 32, (char)118, t100, 32, (char)118, t114, 32, (char)118, t128, 32, (char)118, t142, 32, (char)118, t156, 32);
    goto LAB12;

}

void Monitor_77_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4936);
    t2 = (t0 + 5496);
    xsi_vlogfile_monitor((void *)Monitor_77_5_Func, t1, t2);

LAB1:    return;
}


extern void work_m_11022732528957881798_0341474959_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Initial_34_1,(void *)Always_63_2,(void *)Always_67_3,(void *)Initial_75_4,(void *)Always_83_6,(void *)Monitor_77_5};
	xsi_register_didat("work_m_11022732528957881798_0341474959", "isim/CPU_tb_isim_beh.exe.sim/work/m_11022732528957881798_0341474959.didat");
	xsi_register_executes(pe);
}
