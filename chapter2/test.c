/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月07日 星期四 14时35分27秒
 ************************************************************************/

#include<stdio.h>
int main()

{
    printf("c = %d\n, b = %u\n", -2147483647,    -2147483647);
    printf("b = %d\n, b = %u\n", -2147483647-1,  -2147483647-1);
    printf("a = %d\n, a = %u\n", -2147483647-1u, -2147483647-1u);
    return 0;
}
