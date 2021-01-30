//ц╟ещеепР
#include<stdio.h>
int main()
{
    int t,i,j,n,k=0,m;
    int a[10000];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(a[j]<a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
        k++;
        if(k==m)
            break;
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);
    return 0;
}