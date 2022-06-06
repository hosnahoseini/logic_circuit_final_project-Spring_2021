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
    work_m_00000000001924922139_3190593924_init();
    work_m_00000000002390543145_2386756495_init();
    work_m_00000000003641351942_1574898150_init();
    work_m_00000000000552982956_3298147383_init();
    work_m_00000000003684992671_2092878769_init();
    work_m_00000000002855639076_0823565296_init();
    work_m_00000000001653730218_3272509503_init();
    work_m_00000000002292374590_1949555310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002292374590_1949555310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
