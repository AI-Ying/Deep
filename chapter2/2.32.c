/*************************************************************************
	> File Name: 2.32.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月08日 星期五 13时47分19秒
 ************************************************************************/

#include<stdio.h>
int tadd_ok(int x, int y)
{
    int sum = x + y;
    printf("sum = %d\t sum-x = %d\t sum-y = %d\n", sum, sum-x, sum-y);
    return (sum-x == y) && (sum-y == x); 
}

int tsub_ok(int x, int y)
{
    return tadd_ok(x, -y);
}
int main()
{

    int x, y;
    printf("input x and y:");
    scanf("%d, %d", &x, &y);
    printf("resutl = %d\n", tsub_ok(x, y));
    return 0;
}
