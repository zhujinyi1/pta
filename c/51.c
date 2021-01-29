//求整数位数及其各位之和
#include<stdio.h>
int main()
{
    int a,b,c,s=0,n=1;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    s+=b;
    while(c!=0){
        b=c%10;
        c=c/10;
        n++;
        s+=b;
    }
    printf("%d %d",n,s);
    return 0;
}