//Í³¼Æ×Ö·û
#include<stdio.h>
int main()
{
    int i=0,c=0;
    char a[81],b;
    gets(a);
    b=getchar();
    while(a[i]!='\0'){
        if(b==a[i]){
            c++;
        }
        i++;
    }
    printf("%d",c);
    return 0;
}