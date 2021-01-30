//统计出现最多的数
#include<stdio.h>
int main()
{
    int a[2][1001]={0},i,n,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[0][i]);
        for(j=0;j<=i;j++){
            if(a[0][j]==a[0][i])
                a[1][j]++;
        }
    }
    for(i=0;i<n;i++){
        if(a[1][i]>=a[1][t])
            t=i;
    }
    printf("%d %d",a[0][t],a[1][t]);
    return 0;
}