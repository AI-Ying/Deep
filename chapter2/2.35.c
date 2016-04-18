/*************************************************************************
	> File Name: 2.35.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月08日 星期五 21时01分14秒
 ************************************************************************/

#include<stdio.h>

int tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p/x ==y;
}
int main()
{
    int x, y;
    printf("input x and y:");
    scanf("%d %d", &x, &y);
    printf("result = %d\n", tmult_ok(x, y));
    return 0;
}
