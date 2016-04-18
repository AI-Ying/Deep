/*************************************************************************
	> File Name: 2.25.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月07日 星期四 15时47分00秒
 ************************************************************************/

#include<stdio.h>

float sum_elements(float a[], int length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length-1; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    float array[10];
    int length=0;
    float result;
    result = sum_elements(array, length);
    printf("result = %f\n", result);
    return 0;
}
