//×Ö·û´®ÄæÐò
#include<stdio.h>
#include<math.h>
int main()
{
    char a[81];
    int i;
    gets(a);
    for(i=strlen(a)-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}