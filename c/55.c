// ˝¡–≤Â»Î
#include<stdio.h>
int main()
{
    int a[12],i,n,x,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    i=0;
    while(x>a[i]){
        i++;
    }
    t=i;
    for(i=n-1;i>=t;i--){
        a[i+1]=a[i];
    }
    a[i+1]=x;
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}