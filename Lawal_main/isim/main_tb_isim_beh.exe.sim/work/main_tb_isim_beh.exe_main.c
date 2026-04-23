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
    work_m_08524344841674482493_1823072108_init();
    work_m_05192227231930161797_4224876457_init();
    work_m_10075139087480257914_0304245938_init();
    work_m_08419987180567469441_0286164271_init();
    work_m_00341832542298093877_0750423891_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_00341832542298093877_0750423891");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
