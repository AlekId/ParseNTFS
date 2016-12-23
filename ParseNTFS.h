#ifndef _H_GLOBLE_
#define _H_GLOBLE_

#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include "ntfs.h"

#pragma pack(1)
typedef struct _PARTITION_ENTRY {
    unsigned char boot_ind;		/* ������־ 0x80 - active */
    unsigned char head;			/* ��ʼ��ͷ starting head */
    unsigned short sector:6;	/* ��ʼ���� starting sector */
    unsigned short cyl:10;		/* ��ʼ���� starting cylinder */
    unsigned char sys_ind;	    /* ϵͳID   What partition type */
    unsigned char end_head;		/* ������ͷ end head */
    unsigned char end_sector;	/* �������� end sector */
    unsigned char end_cyl;		/* �������� end cylinder */
    unsigned int start_sect;	/* ��������� starting sector counting from 0 */
    unsigned int nr_sects;		/* �������� sum of sectors in this partition */
}PARTITION_ENTRY,* PPARTITION_ENTRY;
#pragma pack()

void AnalysePartition();

#endif