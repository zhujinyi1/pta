//Êä³öÊı×é
#include<stdio.h>
int main()
{
    int a[11],i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++){
            
        if(i%3==0)
            printf("%d\n",a[i]-a[i-1]);
        else    
            printf("%d ",a[i]-a[i-1]);
    }
    printf("%d",a[i]-a[i-1]);
    return 0;
}