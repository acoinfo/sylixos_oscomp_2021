/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: tmCmd.c
**
** 创   建   人: xxx
**
** 文件创建日期: 2020 年 12 月 24 日
**
** 描        述: xxx 命令行
*********************************************************************************************************/
#define  __SYLIXOS_KERNEL
#include <SylixOS.h>
#include <stdio.h>

/*********************************************************************************************************
** 函数名称: tmEnable
** 功能描述: 使能去使能流量统计功能
** 输　入  : bIsEnable   是否使能统计功能
** 输　出  : NONE
** 返　回  : 操作结果
*********************************************************************************************************/
INT  tmEnable (BOOL  bIsEnable)
{
    if (bIsEnable) {
        fprintf(stdout, "traffic statistics enable.\n");
    } else {
        fprintf(stdout, "traffic statistics disable.\n");
    }

    return 0;
}

/*********************************************************************************************************
** 函数名称: tmStatItemAdd
** 功能描述: 命令行增加统计项
** 输　入  : iArgC     命令行参数个数
**           ppcArgV   命令行参数数组
** 输　出  : NONE
** 返　回  : 操作结果
*********************************************************************************************************/
INT  tmStatItemAdd (INT  iArgC, PCHAR  *ppcArgV)
{
    fprintf(stdout, "traffic statistics add an item.\n");
    return 0;
}

/*********************************************************************************************************
** 函数名称: tmStatItemDelete
** 功能描述: 命令行删除统计项
** 输　入  : iArgC     命令行参数个数
**           ppcArgV   命令行参数数组
** 输　出  : NONE
** 返　回  : 操作结果
*********************************************************************************************************/
INT  tmStatItemDelete (INT  iArgC, PCHAR  *ppcArgV)
{
    fprintf(stdout, "traffic statistics delete an item.\n");
    return 0;
}

/*********************************************************************************************************
 ** 函数名称: tmShowStats
 ** 功能描述: 打印所有统计信息
 ** 输　入  : iType     过滤条件类型：0 表示所有, 其他参照 TMT_*, 如 TMT_TERM 等
 **           pip4Addr  过滤条件 ip 地址
 ** 输　出  : NONE
 ** 返　回  : NONE
*********************************************************************************************************/
VOID  tmShowStats (INT  iType, void  *pip4Addr)
{
    printf("Show traffic statistic:\n");

    printf("IP\t  ifname\t      MAC\t        TYPE\t  "
            "protocol\t port\t "
            "recv_curr_len\t send_curr_len\t recv_total_len(Bytes)\t"
            "send_total_len(Bytes) \n\n");

    //tmWalkStats(__tmPrintStatInfo, &iType, pip4Addr, LW_NULL);
}
/*********************************************************************************************************
** 函数名称: __tshellTmStat
** 功能描述: 流量管理监控命令行处理函数
** 输　入  : iArgC     命令行参数个数
**           ppcArgV   命令行参数数组
** 输　出  : NONE
** 返　回  : NONE
*********************************************************************************************************/
static INT  __tshellTmStat (INT  iArgC, PCHAR  *ppcArgV)
{
    INT                 iType = 0;

    if (1 == iArgC) {
        tmShowStats(iType, LW_NULL);

        return  (ERROR_NONE);
    }

    if (!lib_strcmp(ppcArgV[1], "enable")) {
        tmEnable(LW_TRUE);
    } else if (!lib_strcmp(ppcArgV[1], "disable")) {
        tmEnable(LW_FALSE);
    } else if (!lib_strcmp(ppcArgV[1], "add")) {
        tmStatItemAdd(iArgC, ppcArgV);
    } else if (!lib_strcmp(ppcArgV[1], "del")) {
        tmStatItemDelete(iArgC, ppcArgV);
    } else if (!lib_strcmp(ppcArgV[1], "show")) {
        tmShowStats(iType, LW_NULL);
    } else {
        goto  __arg_error;
    }

    return  (ERROR_NONE);

__arg_error:
    fprintf(stderr, "arguments error!\n");

    return  (-ERROR_TSHELL_EPARAM);
}

/*********************************************************************************************************
** 函数名称: tmInstallCmd
** 功能描述: 安装命令行
** 输　入  : NONE
** 输　出  : NONE
** 返　回  : NONE
*********************************************************************************************************/
VOID  tmInstallCmd (VOID)
{
    API_TShellKeywordAdd("tm", __tshellTmStat);
    API_TShellFormatAdd("tm", " add | del tm_type ip [mac] [ifname] [tcp | udp] [port]. \n"
                              "tm show [tm_type]. \n"
                              "tm disable | enable. \n");
    API_TShellHelpAdd("tm", "add, delete statistics item(tm_type should be one of term,line,app),\n"
                             " and show traffic statistics.\n"
                             "eg: tm add term 192.168.1.100 48:4d:7e:9f:bc:11\n"
                             "    tm add line en4 \n"
                             "    tm del line en4 \n"
                             "    tm del term 192.168.1.100 \n"
                             "    tm show term \n"
                             "    tm show line \n"
                             "    tm show app \n"
                             "    tm show lineapp \n"
                             "    tm disable \n");
}
