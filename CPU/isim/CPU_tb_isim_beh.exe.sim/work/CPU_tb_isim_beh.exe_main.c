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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_04284627112054182733_2660064063_init();
    xilinxcorelib_ver_m_04284627112054182733_2909974028_init();
    xilinxcorelib_ver_m_18166792875774041790_3585066727_init();
    xilinxcorelib_ver_m_17738287534884592592_2447005411_init();
    xilinxcorelib_ver_m_10066368518302646626_2451314509_init();
    work_m_13486228919492782400_0317860448_init();
    work_m_04447285719605872457_2207036512_init();
    work_m_16087975123905604973_0886308060_init();
    work_m_05770336969472277177_0278921292_init();
    xilinxcorelib_ver_m_04284627112054182733_1103631681_init();
    xilinxcorelib_ver_m_04284627112054182733_1916264562_init();
    xilinxcorelib_ver_m_18166792875774041790_3218604958_init();
    xilinxcorelib_ver_m_17738287534884592592_0494545789_init();
    xilinxcorelib_ver_m_10066368518302646626_1434909525_init();
    work_m_10431123694831851113_2356217838_init();
    work_m_00701557770129636953_0487561710_init();
    work_m_14874708700387877667_3508565487_init();
    work_m_08387401331917112445_0341474959_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_08387401331917112445_0341474959");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
