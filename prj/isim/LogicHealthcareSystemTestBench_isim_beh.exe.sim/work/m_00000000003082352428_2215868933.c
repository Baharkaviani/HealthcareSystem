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
static const char *ng0 = "D:/Bahar/Book amirkabir/logic/HW/finalProject/src/rtl/modules/LogicHealthcareSystemController.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {17U, 0U};
static unsigned int ng12[] = {33U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {18U, 0U};
static unsigned int ng16[] = {34U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {20U, 0U};
static unsigned int ng19[] = {36U, 0U};
static unsigned int ng20[] = {24U, 0U};
static unsigned int ng21[] = {40U, 0U};
static unsigned int ng22[] = {48U, 0U};
static unsigned int ng23[] = {7U, 0U};
static unsigned int ng24[] = {11U, 0U};
static unsigned int ng25[] = {19U, 0U};
static unsigned int ng26[] = {35U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {21U, 0U};
static unsigned int ng29[] = {37U, 0U};
static unsigned int ng30[] = {25U, 0U};
static unsigned int ng31[] = {41U, 0U};
static unsigned int ng32[] = {49U, 0U};
static unsigned int ng33[] = {14U, 0U};
static unsigned int ng34[] = {22U, 0U};
static unsigned int ng35[] = {38U, 0U};
static unsigned int ng36[] = {26U, 0U};
static unsigned int ng37[] = {42U, 0U};
static unsigned int ng38[] = {50U, 0U};
static unsigned int ng39[] = {28U, 0U};
static unsigned int ng40[] = {44U, 0U};
static unsigned int ng41[] = {52U, 0U};
static unsigned int ng42[] = {56U, 0U};
static unsigned int ng43[] = {15U, 0U};
static unsigned int ng44[] = {23U, 0U};
static unsigned int ng45[] = {39U, 0U};
static unsigned int ng46[] = {27U, 0U};
static unsigned int ng47[] = {43U, 0U};
static unsigned int ng48[] = {51U, 0U};
static unsigned int ng49[] = {29U, 0U};
static unsigned int ng50[] = {45U, 0U};
static unsigned int ng51[] = {53U, 0U};
static unsigned int ng52[] = {57U, 0U};
static unsigned int ng53[] = {30U, 0U};
static unsigned int ng54[] = {46U, 0U};
static unsigned int ng55[] = {54U, 0U};
static unsigned int ng56[] = {58U, 0U};
static unsigned int ng57[] = {60U, 0U};
static unsigned int ng58[] = {31U, 0U};
static unsigned int ng59[] = {47U, 0U};
static unsigned int ng60[] = {59U, 0U};
static unsigned int ng61[] = {61U, 0U};
static unsigned int ng62[] = {62U, 0U};
static unsigned int ng63[] = {63U, 0U};



static void NetDecl_38_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 2640U);
    t5 = *((char **)t2);
    t2 = (t0 + 2480U);
    t6 = *((char **)t2);
    t2 = (t0 + 2320U);
    t7 = *((char **)t2);
    t2 = (t0 + 2160U);
    t8 = *((char **)t2);
    xsi_vlogtype_concat(t3, 6, 6, 5U, t8, 1, t7, 1, t6, 1, t5, 1, t4, 2);
    t2 = (t0 + 5616);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 63U;
    t14 = t13;
    t15 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    xsi_driver_vfirst_trans(t2, 0, 5U);
    t21 = (t0 + 5504);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Initial_48_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_51_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5520);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3120U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng42)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng44)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng45)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng46)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng47)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng49)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng50)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng51)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng52)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng53)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng54)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng55)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng56)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng57)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng58)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB120;

LAB121:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB122;

LAB123:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB124;

LAB125:    t2 = ((char*)((ng60)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB126;

LAB127:    t2 = ((char*)((ng61)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB128;

LAB129:    t2 = ((char*)((ng62)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB130;

LAB131:    t2 = ((char*)((ng63)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB134;

LAB8:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB10:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB12:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB14:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB16:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB18:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB20:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB22:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB24:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB26:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB28:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB30:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB32:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB34:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB36:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB38:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB40:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB42:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB44:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB46:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB48:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB50:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB52:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB54:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB56:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB58:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB60:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB62:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB64:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB66:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB68:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB70:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB72:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB74:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB76:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB78:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB80:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB82:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB84:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB86:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB88:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB90:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB92:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB94:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB96:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB98:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB100:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB102:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB104:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB106:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB108:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB110:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB112:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB114:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB116:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB118:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB120:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB122:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB124:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB126:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB128:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB130:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

LAB132:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB134;

}

static void Cont_196_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 5536);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003082352428_2215868933_init()
{
	static char *pe[] = {(void *)NetDecl_38_0,(void *)Initial_48_1,(void *)Always_51_2,(void *)Cont_196_3};
	xsi_register_didat("work_m_00000000003082352428_2215868933", "isim/LogicHealthcareSystemTestBench_isim_beh.exe.sim/work/m_00000000003082352428_2215868933.didat");
	xsi_register_executes(pe);
}
