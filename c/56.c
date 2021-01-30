//ВщевЪ§
#include<stdio.h>
int main()
{
    long int a[21],n,x,i,t=-1;
    scanf("%ld%ld",&n,&x);
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
        if(a[i]==x){
            t=i;
        }
    }
    if(t==-1){
        printf("Not Found");
    }
    else
        printf("%ld",t);
    return 0;
}