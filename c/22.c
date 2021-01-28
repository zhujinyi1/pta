//求最大值及其下标
#include<stdio.h>
int main()
{
    int a[10],n,i,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[t]<a[i])
            t=i;
    }
    printf("%d %d",a[t],t);
    return 0;
}