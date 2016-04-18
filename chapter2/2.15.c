/*************************************************************************
	> File Name: 2.15.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 12时38分56秒
 ************************************************************************/

#include<stdio.h>

int equal(int x, int y)
{
    return !((~x & y));
}
int main()
{
    int a, b, result;
    a = 3;
    b = 2;
    result = equal(a-1, b);
    if (result)
    {
        printf("equal!\n");
    }
    else
    {
        printf("Not equal!\n");
    }
    return 0;
}
