//寻找250
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=1;
    int *p,i=0;
    char m;
    p=(int *)calloc(100000,sizeof(int));
    do{ 
        scanf("%d",p+n);
        n++;
    }while((m=getchar())!='\n');
    for(i=1;i<=n;i++){
        if(*(p+i)==250){
            break;
        }
    }
    printf("%d",i);
    return 0;
}