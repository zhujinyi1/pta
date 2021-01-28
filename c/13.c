//比较大小
#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c)
    {
        i=a;
        a=c;
        c=i;
    }
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }
    if(b>c)
    {
        i=b;
        b=c;
        c=i;
    }
    printf("%d->%d->%d",a,b,c);
    return 0;
}