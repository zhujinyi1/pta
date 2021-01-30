//混合类型数据格式化输入
#include<stdio.h>
int main()
{
    int a;
    char c;
    double m,n;
    scanf("%lf %d %c %lf",&m,&a,&c,&n);
    printf("%c %d %.2lf %.2lf",c,a,m,n);
    return 0;
}