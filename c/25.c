//��������
#include<stdio.h>
int main()
{
    int n,a[10][10],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i!=n-1&&j!=n-1&&i+j!=n-1)
                s=s+a[i][j];
    }
    printf("%d",s);
    return 0;
}