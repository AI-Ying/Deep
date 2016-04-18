/*************************************************************************
	> File Name: 2-10.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 10时35分13秒
 ************************************************************************/

#include<stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main()
{
    int a, b;
    a = 1;
    b = 1;
    printf("Befor conversion : a = %d\t b = %d\n", a, b);
    inplace_swap(&a, &b);
    printf("After conversion : a = %d\t b = %d\n", a, b);
    return 0;
}
