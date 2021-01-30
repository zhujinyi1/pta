//给定N个职员的信息，包括姓名、基本工资、浮动工资和支出，要求编写程序顺序输出每位职员的姓名和实发工资（实发工资=基本工资+浮动工资-支出）
#include<stdio.h>

struct stuff{
    char name[12];
    double basic;
    double f;
    double spend;
    double end;
}s[100];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&s[i].name);
        scanf("%lf%lf%lf",&s[i].basic,&s[i].f,&s[i].spend);
        s[i].end = s[i].basic + s[i].f -s[i].spend;
    }
    for(i=0;i<n;i++){
        printf("%s %.2lf\n",s[i].name,s[i].end);
    }
    return 0;
}