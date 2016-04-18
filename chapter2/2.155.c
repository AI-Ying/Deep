/*************************************************************************
	> File Name: 2.155.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 15时13分08秒
 ************************************************************************/

#include<stdio.h>

int equal(int x, int y)
{
    if (x == y)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, result;
    a = 3;
    b = 2;
    result = equal(a-1, 2);
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
