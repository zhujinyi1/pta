//日期格式化

#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%02d-%02d-%d",&m,&d,&y);
    printf("%d-%02d-%02d",y,m,d);
    return 0;
}