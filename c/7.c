//求组合数
#include<stdio.h>
double fact(int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("result = %.0lf",fact(n)/(fact(m)*fact(n-m)));
    return 0;
}

double fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}