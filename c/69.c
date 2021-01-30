//两个数的简单计算器
#include<stdio.h>
int main()
{
    int a,b,c;
    char d;
    scanf("%d %c %d",&a,&d,&b);
    if(d=='%')
        c=a%b;
    else if(d=='+')
        c=a+b;
    else if(d=='-')
        c=a-b;
    else if(d=='*')
        c=a*b;
    else if(d=='/')
        if(b==0){
            printf("ERROR");
            return 0;
        }
        else
            c=a/b;
    else{
        printf("ERROR");
        return 0;
    }
    printf("%d",c);
    return 0;
}