//找出总分最高的学生
#include<Stdio.h>

struct stu{
    char num[10];
    char name[12];
    int progress[3];
    int sum; 
}s[10000];

int main()
{
    int n,i,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s[i].sum=0;
        scanf("%s",&s[i].num);
        scanf("%s",&s[i].name);
        for(j=0;j<3;j++){
            scanf("%d",&s[i].progress[j]);
            s[i].sum+=s[i].progress[j];
        }
        if(s[t].sum<s[i].sum)
            t=i;
    }
    printf("%s %s %d\n",s[t].name,s[t].num,s[t].sum);
    return 0;
}