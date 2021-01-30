//单词按照长度排序输出
#include<stdio.h>
#include<string.h>

int main()
{
    char a[21][11],t[11],m[11]={'#','\0'};
    int i=0,n=0,j;
    scanf("%s",&a[n]);
    while(strcmp(a[n],m)!=0)
    {
        n++;
        scanf("%s",&a[n]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(strlen(a[i])>strlen(a[j])){
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s ",a[i]);
    }
    return 0;
}