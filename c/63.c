//ÕÒ×î³¤µÄ×Ö·û´®
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000][81];
    int n,i,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
        if(strlen(a[i])>strlen(a[t]))
            t=i;
    }
    printf("The longest is: %s",a[t]);
    return 0;
}