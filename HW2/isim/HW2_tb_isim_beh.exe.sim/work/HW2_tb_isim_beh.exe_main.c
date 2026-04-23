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
    work_m_05530557871244058463_3438202367_init();
    work_m_05529676053040421356_1090719410_init();
    work_m_04318877308866950970_2049998012_init();
    work_m_02672300886960056472_4057324616_init();
    work_m_00077651730687320156_1783406054_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_00077651730687320156_1783406054");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
