//´óÐ¡Ð´×ª»»
#include<stdio.h>
int main()
{
    char a[31];
    int i=0;
    do{
        scanf("%c",&a[i]);
        i++;
    }while(a[i-1]!='#');
    a[i]='\0';
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
        else if(a[i]>='A'&&a[i]<='Z'){
            a[i]+=32;
        }
        i++;
    }
    i=0;
    do{
        printf("%c",a[i]);
        i++;
    }while(a[i]!='#');
    return 0;
}