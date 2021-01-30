//计算平均成绩
#include<stdio.h>

struct stu{
    char num[10];
    char name[12];
    double progress;
}s[10000];

int main()
{
    int n,i;
    double ave=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&s[i].num);
        scanf("%s",&s[i].name);
        scanf("%lf",&s[i].progress);
        ave+=s[i].progress;
    }
    ave = ave/n;
    printf("%.2lf\n",ave);
    for(i=0;i<n;i++){
        if(s[i].progress<ave){
            printf("%s %s\n",s[i].name,s[i].num);
        }
    }
    return 0;
}