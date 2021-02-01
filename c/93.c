//最佳情侣身高差

#include<stdio.h>
int main()
{
    int n,i;
    double a[11],b[11];
    char c;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        getchar();
        scanf("%c %lf",&c,&a[i]);
        if(c=='M'){
            b[i]=a[i]/1.09;
        }
        if(c=='F'){
            b[i]=a[i]*1.09;
        }
    }
    for(i=0;i<n;i++){
        printf("%.2lf\n",b[i]);
    }
    return 0;
}