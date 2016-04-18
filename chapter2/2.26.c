/*************************************************************************
	> File Name: 2.26.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月07日 星期四 16时36分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int strlonger(char *s, char *t)
{
    return strlen(s) - strlen(t) > 0;
}

int main()
{
    string a, b;
    printf("please input a:");
    scanf("%s", &a);
    printf("please input b:");
    scanf("%s", &b);
    printf("a - b = %d\n", strlonger(&a, &b));
    return 0;
}
