//出租车计价
#include<stdio.h>
int main()
{
    double a,b;
    int c,d;
    scanf("%lf%lf",&a,&b);
    if(a<=3)
        c=10;
    else
        if(a>10)
            c=10+(a-3)*2+a-10+0.5;
        else
            c=10+(a-3)*2+0.5;
    d=c+(int)b/5*2;
    printf("%d",d);
    return 0;
}