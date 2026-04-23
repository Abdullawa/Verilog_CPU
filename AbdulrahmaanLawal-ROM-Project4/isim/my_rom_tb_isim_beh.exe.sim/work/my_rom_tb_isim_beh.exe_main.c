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
    work_m_06393835191968815424_2093381070_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_06393835191968815424_2093381070");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
