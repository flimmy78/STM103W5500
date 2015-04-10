/**
 * NetHander.h �����ʼ������
 * Describtion:
 * Author: qinfei 2015.04.09
 * Version: GatewayV1.0
 * Support:qf.200806@163.com
 */
#ifndef __NET_HANDLER_H__
#define	__NET_HANDLER_H__
#include "stm32f10x_it.h"
#include "wizchip_conf.h"

/* Private define ------------------------------------------------------------*/
#define SOCK_DHCP		0
#define MY_MAX_DHCP_RETRY	10   /*DHCP����������*/
#define DATA_BUF_SIZE           2048 /*��ȡ���ݵ�����ֽ���*/

/* Private functions ---------------------------------------------------------*/
void network_init(void);      /*�����ʼ��*/
void NetworkInitHandler(void);/*����W5500����*/
void DhcpRunInLoop(void);     /*DHCP running*/

#endif /* __NET_HANDLER_H__ */