//Êý×éÄæÐò
#include<stdio.h>
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("%d",a[i]);
    return 0;
}