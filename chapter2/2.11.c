/*************************************************************************
	> File Name: 2.11.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月01日 星期五 10时48分26秒
 ************************************************************************/

#include<stdio.h>

void inplace_swap(int *x, int *y)
{
    if (x == y)
    {
        *x = *y;
    }
    else
    {
        *y = *x ^ *y;
        *x = *x ^ *y;
        *y = *x ^ *y;
    }
}


void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        inplace_swap(&a[first], &a[last]);
    }
}


int main()
{
    int a[100], i, size;
    printf("Input the size:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {   
        printf("Input the number:");
        scanf("%d", &a[i]);
    }
    printf("\nBefore the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    reverse_array(a, size);
    printf("\nAfter the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
