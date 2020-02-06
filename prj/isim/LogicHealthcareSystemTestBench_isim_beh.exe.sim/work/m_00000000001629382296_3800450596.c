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
static const char *ng0 = "D:/Bahar/Book amirkabir/logic/HW/finalProject/src/rtl/modules/NervousShockDetector.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {20U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {16U, 0U};
static unsigned int ng19[] = {17U, 0U};
static unsigned int ng20[] = {18U, 0U};
static unsigned int ng21[] = {19U, 0U};



static void Initial_52_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4624);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_54_1(char *t0)
{
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

LAB0:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 5824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);
    t9 = (t0 + 4064U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(64, ng0);

LAB53:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB51:    goto LAB48;

LAB8:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(76, ng0);

LAB58:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB56:    goto LAB48;

LAB10:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(88, ng0);

LAB63:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB61:    goto LAB48;

LAB12:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(100, ng0);

LAB68:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB66:    goto LAB48;

LAB14:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(112, ng0);

LAB73:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB71:    goto LAB48;

LAB16:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(124, ng0);

LAB78:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB76:    goto LAB48;

LAB18:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(136, ng0);

LAB83:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB81:    goto LAB48;

LAB20:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(148, ng0);

LAB88:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB86:    goto LAB48;

LAB22:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(160, ng0);

LAB93:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB91:    goto LAB48;

LAB24:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(172, ng0);

LAB98:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB96:    goto LAB48;

LAB26:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(184, ng0);

LAB103:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB101:    goto LAB48;

LAB28:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(196, ng0);

LAB108:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB106:    goto LAB48;

LAB30:    xsi_set_current_line(202, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(208, ng0);

LAB113:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB111:    goto LAB48;

LAB32:    xsi_set_current_line(214, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(220, ng0);

LAB118:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB116:    goto LAB48;

LAB34:    xsi_set_current_line(226, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(232, ng0);

LAB123:    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB121:    goto LAB48;

LAB36:    xsi_set_current_line(238, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(244, ng0);

LAB128:    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB126:    goto LAB48;

LAB38:    xsi_set_current_line(250, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(256, ng0);

LAB133:    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB131:    goto LAB48;

LAB40:    xsi_set_current_line(262, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(268, ng0);

LAB138:    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB136:    goto LAB48;

LAB42:    xsi_set_current_line(274, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(280, ng0);

LAB143:    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB141:    goto LAB48;

LAB44:    xsi_set_current_line(286, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(292, ng0);

LAB148:    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB146:    goto LAB48;

LAB46:    xsi_set_current_line(298, ng0);
    t3 = (t0 + 4064U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(304, ng0);

LAB153:    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB151:    goto LAB48;

LAB49:    xsi_set_current_line(59, ng0);

LAB52:    xsi_set_current_line(60, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 4624);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB51;

LAB54:    xsi_set_current_line(71, ng0);

LAB57:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB56;

LAB59:    xsi_set_current_line(83, ng0);

LAB62:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB61;

LAB64:    xsi_set_current_line(95, ng0);

LAB67:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB66;

LAB69:    xsi_set_current_line(107, ng0);

LAB72:    xsi_set_current_line(108, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB71;

LAB74:    xsi_set_current_line(119, ng0);

LAB77:    xsi_set_current_line(120, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB76;

LAB79:    xsi_set_current_line(131, ng0);

LAB82:    xsi_set_current_line(132, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB81;

LAB84:    xsi_set_current_line(143, ng0);

LAB87:    xsi_set_current_line(144, ng0);
    t5 = ((char*)((ng10)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB86;

LAB89:    xsi_set_current_line(155, ng0);

LAB92:    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng12)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB91;

LAB94:    xsi_set_current_line(167, ng0);

LAB97:    xsi_set_current_line(168, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB96;

LAB99:    xsi_set_current_line(179, ng0);

LAB102:    xsi_set_current_line(180, ng0);
    t5 = ((char*)((ng12)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB101;

LAB104:    xsi_set_current_line(191, ng0);

LAB107:    xsi_set_current_line(192, ng0);
    t5 = ((char*)((ng14)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB106;

LAB109:    xsi_set_current_line(203, ng0);

LAB112:    xsi_set_current_line(204, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB111;

LAB114:    xsi_set_current_line(215, ng0);

LAB117:    xsi_set_current_line(216, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB116;

LAB119:    xsi_set_current_line(227, ng0);

LAB122:    xsi_set_current_line(228, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB121;

LAB124:    xsi_set_current_line(239, ng0);

LAB127:    xsi_set_current_line(240, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB126;

LAB129:    xsi_set_current_line(251, ng0);

LAB132:    xsi_set_current_line(252, ng0);
    t5 = ((char*)((ng19)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB131;

LAB134:    xsi_set_current_line(263, ng0);

LAB137:    xsi_set_current_line(264, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB136;

LAB139:    xsi_set_current_line(275, ng0);

LAB142:    xsi_set_current_line(276, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB141;

LAB144:    xsi_set_current_line(287, ng0);

LAB147:    xsi_set_current_line(288, ng0);
    t5 = ((char*)((ng16)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB146;

LAB149:    xsi_set_current_line(299, ng0);

LAB152:    xsi_set_current_line(300, ng0);
    t5 = ((char*)((ng16)));
    t7 = (t0 + 4624);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB151;

}


extern void work_m_00000000001629382296_3800450596_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000001629382296_3800450596", "isim/LogicHealthcareSystemTestBench_isim_beh.exe.sim/work/m_00000000001629382296_3800450596.didat");
	xsi_register_executes(pe);
}
