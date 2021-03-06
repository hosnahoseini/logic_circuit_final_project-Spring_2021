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
    work_m_00000000003721273282_0787480197_init();
    work_m_00000000004185362350_3895858517_init();
    work_m_00000000000300805354_2764620403_init();
    work_m_00000000001924922139_3190593924_init();
    work_m_00000000002390543145_2386756495_init();
    work_m_00000000003641351942_1574898150_init();
    work_m_00000000000552982956_3298147383_init();
    work_m_00000000003684992671_2092878769_init();
    work_m_00000000002855639076_0823565296_init();
    work_m_00000000000974200232_3272509503_init();
    work_m_00000000003711294861_0032615217_init();
    work_m_00000000003730413374_2518905529_init();
    work_m_00000000001563180356_3540511050_init();
    work_m_00000000000637229128_1435565642_init();
    work_m_00000000003852240348_2850883277_init();
    work_m_00000000002941303179_0410812591_init();
    work_m_00000000003943321018_0274277177_init();
    work_m_00000000003863283672_0520759566_init();
    work_m_00000000003549481763_1818090095_init();
    work_m_00000000000807830466_4133096117_init();
    work_m_00000000003354846837_0384270321_init();
    work_m_00000000002789491494_1949555310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002789491494_1949555310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
