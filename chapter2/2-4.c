/*************************************************************************
	> File Name: 2-4.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月30日 星期三 19时35分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void test_show_bytes()
{
   /* int ival = val;
    float fval = (float)ival;
    int *pval = &ival;*/
    //int val = 0x87654321;

    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
    //byte_pointer valp = (byte_pointer) &val;
   /*show_int(ival);
    show_float(fval);
    show_pointer(pval);*/
    //show_bytes(valp, 1);
    //show_bytes(valp, 2);
    //show_bytes(valp, 3);
}

int main()
{
    //test_show_bytes(12345);
    test_show_bytes();
    return 0;
}
