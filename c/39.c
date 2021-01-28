//Í¨Ñ¶Â¼ÅÅÐò
#include<stdio.h>
struct people{
    char name[11];
    int day;
    char tel[18];
}p[10],t;
int main()
{
    int n,i,a,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&a);
        scanf("%s",&p[i].name);
        scanf("%d",&p[i].day);
        scanf("%c",&a);
        scanf("%s",&p[i].tel);
    }
    for(i=0;i<n;i++)
        for(j=i;j<n;j++){
            if(p[i].day<p[j].day)
            {           
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    for(i=0;i<n;i++){
        printf("%s %d %s\n",p[i].name,p[i].day,p[i].tel);
    }
    return 0;
}