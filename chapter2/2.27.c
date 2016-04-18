/*************************************************************************
	> File Name: 2.27.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月07日 星期四 20时55分38秒
 ************************************************************************/

#include<stdio.h>

int uadd_ok(unsigned x, unsigned y)
{
    return (x+y >= x && x+y >= y);
}
int main()
{
    unsigned x, y;
    int result;
    printf("input the x and y:");
    scanf("%u %u", &x, &y);
    result =  uadd_ok(x, y);
    printf("result = %d\t x+y=%u\n", result, (x+y));
    return 0;
}
