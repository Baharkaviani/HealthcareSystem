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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Bahar/Book amirkabir/logic/HW/finalProject/src/rtl/modules/InformationController.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {6U, 0U};



static void Initial_48_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);

LAB2:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_55_1(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    t3 = (t0 + 4288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);
    t9 = (t0 + 1888U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB16;

LAB8:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t3) == 0)
        goto LAB20;

LAB22:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB23:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB25;

LAB24:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB28:    goto LAB16;

LAB10:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t3) == 0)
        goto LAB40;

LAB42:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB43:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB45;

LAB44:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:
LAB51:
LAB48:    goto LAB16;

LAB12:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t3) == 0)
        goto LAB52;

LAB54:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB55:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB57;

LAB56:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB16;

LAB14:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t3) == 0)
        goto LAB61;

LAB63:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB64:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB66;

LAB65:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(82, ng0);

LAB70:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 7);
    t19 = (t15 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t18 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(89, ng0);

LAB75:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB73:
LAB69:    goto LAB16;

LAB17:    xsi_set_current_line(59, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 3088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB19;

LAB20:    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB25:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB24;

LAB26:    xsi_set_current_line(62, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB28;

LAB29:    xsi_set_current_line(64, ng0);

LAB32:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2208U);
    t7 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t9);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t9);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB36;

LAB33:    if (t28 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t18) = 1;

LAB36:    t16 = (t18 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    t33 = *((unsigned int *)t18);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB39:    goto LAB31;

LAB35:    t10 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(66, ng0);
    t17 = ((char*)((ng3)));
    t36 = (t0 + 3088);
    xsi_vlogvar_assign_value(t36, t17, 0, 0, 3);
    goto LAB39;

LAB40:    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB45:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB44;

LAB46:    xsi_set_current_line(72, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB48;

LAB49:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 3088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB51;

LAB52:    *((unsigned int *)t18) = 1;
    goto LAB55;

LAB57:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB56;

LAB58:    xsi_set_current_line(77, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB60;

LAB61:    *((unsigned int *)t18) = 1;
    goto LAB64;

LAB66:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB65;

LAB67:    xsi_set_current_line(80, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB69;

LAB71:    xsi_set_current_line(84, ng0);

LAB74:    xsi_set_current_line(85, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 2928);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB73;

}


extern void work_m_00000000000219614604_3769939023_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Always_55_1};
	xsi_register_didat("work_m_00000000000219614604_3769939023", "isim/ConfigurationUnitTest_isim_beh.exe.sim/work/m_00000000000219614604_3769939023.didat");
	xsi_register_executes(pe);
}
