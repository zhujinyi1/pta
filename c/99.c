/*²ÂÊý×Ö*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a[10001];
    char b[10001][9];
    int n,i,j,t=0;
    double c,ave;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&b[i],&a[i]);
        ave+=a[i];
    }
    ave=ave/n/2;
    c=fabs(a[0]-ave);
    for(i=1;i<n;i++){
        if(fabs(a[i]-ave)<c){
            c=fabs(a[i]-ave);
            t=i;
        }
    }
    printf("%d %s",(int)ave,b[t]);
    return 0;
}