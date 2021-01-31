//Êı×éÑ­»·×óÒÆ
#include<stdio.h>
int main()
{
    int a[101],b[101],m,n,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=m%n;
    for(i=0;i<n;i++){
            if(i<m)
            {
                b[i]=a[i];
            }
            else{
                a[i-m]=a[i];
            }
        }
    for(i=0;i<m;i++){
        a[n+i-m]=b[i];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);
    return 0;
}