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
    xilinxcorelib_ver_m_04284627112054182733_1103631681_init();
    xilinxcorelib_ver_m_04284627112054182733_1916264562_init();
    xilinxcorelib_ver_m_18166792875774041790_3218604958_init();
    xilinxcorelib_ver_m_17738287534884592592_0494545789_init();
    xilinxcorelib_ver_m_10066368518302646626_1434909525_init();
    work_m_10431123694831851113_2356217838_init();
    work_m_00701557770129636953_0487561710_init();
    work_m_04984142808362424919_3287731119_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_04984142808362424919_3287731119");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
