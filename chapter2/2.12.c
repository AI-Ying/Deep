/*************************************************************************
	> File Name: 2.12.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 11时40分59秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int x = 0x87654321;
    printf("%x\n", x);
    printf("%x\n", (x & 0xFF));
    printf("%x\n", ((~x)^0xFF));
    printf("%x\n", (x | 0xFF));
    return 0;
}
