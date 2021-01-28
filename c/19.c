//ÇóÆæÊıºÍ
#include<stdio.h>
int main()
{
    int a,s=0;
    scanf("%d",&a);
    while(a>0){
        if(a%2!=0)
            s+=a;
        scanf("%d",&a);
    }
    printf("%d",s);
    return 0;
}