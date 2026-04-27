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
    work_m_16087975123905604973_0886308060_init();
    work_m_13465341639937753833_0278921292_init();
    work_m_04906259285050489100_2035480523_init();
    work_m_05316865604966260594_3508565487_init();
    work_m_11022732528957881798_0341474959_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_11022732528957881798_0341474959");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
