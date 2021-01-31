//ÅĞ¶ÏËØÊı

#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
    int i;
    int flag=1;
    if(n==1) flag=0;
    else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int N;
    int n;
    int i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&n);
        if(isPrime(n)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}