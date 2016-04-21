/*************************************************************************
	> File Name: code.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月21日 星期四 16时37分54秒
 ************************************************************************/

int accum = 0;
int sum(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}

int main()
{
    return sum(1, 3);
}
