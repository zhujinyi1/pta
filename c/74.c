//逆序输出三位数
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a/10!=0){
        b=b*10+a%10;
        a=a/10;
    }
    b=b*10+a%10;
    printf("%d",b);
    return 0;
}