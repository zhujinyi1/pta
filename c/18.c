//找素数并求和
#include<stdio.h>
int main()
{
    int M,N,n,a;
    int ge=0,he=0;
    scanf("%d %d",&M,&N);
    if(M==1)
        M++;
    for(n=M;n<=N;n++)
    {
        a=2;
        while(n%a!=0)
        {
            a++;
        }
        if(a==n)
        {
            ge++;
            he+=a;
        }
    }
    printf("%d %d",ge,he);
    return 0;
}