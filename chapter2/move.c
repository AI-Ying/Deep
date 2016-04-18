/*************************************************************************
	> File Name: move.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 15时40分14秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int lval = 0xFEDCBA98;
    int aval = 0xFEDCBA98;
    unsigned uval = 0xFEDCBA98;
    printf("lval << 32 = %x\n", lval << 32);
    printf("aval >> 36 = %x\n", aval >> 36);
    printf("uval >> 40 = %x\n", uval >> 40);
    return 0;
}
