/*************************************************************************
	> File Name: 2.31.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月08日 星期五 13时26分40秒
 ************************************************************************/

#include<stdio.h>
int tadd_ok(int m, int n)
{
    int result = m+n;
    printf("result = %d\t result-m = %d\t result-n = %d\n", m+n, result-m, result-n);
    return (result - m == n) && (result - n == m);
}
int main()
{
    int x, y;
    printf("input x and y:");
    scanf("%d %d", &x, &y);
    printf("overflow = %d\n", tadd_ok(x, y));
    return 0;
}
