/*************************************************************************
	> File Name: 2.14.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 12时09分05秒
 ************************************************************************/

#include<stdio.h>
int main()
{   
    int x, y;
    x = 0x66;
    y = 0x39;
    printf("x&&y = %x", (x && y));
    printf("\tx&y = %x\n", (x & y));

    printf("x | y = %x\t", (x | y));
    printf("x || y = %x\n", (x || y));

    printf("~x | ~y = %x\t", (~x | ~y));
    printf("!x || !y = %x\n", (!x || !y));

    printf("x & !y = %x\t", (x & !y));
    printf("x && ~y = %x\n", (x && ~y));
    return 0;
}
