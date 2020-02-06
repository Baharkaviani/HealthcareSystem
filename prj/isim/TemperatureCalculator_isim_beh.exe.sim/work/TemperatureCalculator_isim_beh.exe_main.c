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
    work_m_00000000000777314163_1549247325_init();
    work_m_00000000003778365474_0182511154_init();
    work_m_00000000003807694465_3446204485_init();
    work_m_00000000003667424523_2571648875_init();
    work_m_00000000003457341935_3950440041_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003457341935_3950440041");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
