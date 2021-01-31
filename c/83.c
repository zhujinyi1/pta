/*
    给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按GPLTGPLT....
    这样的顺序输出，并忽略其它字符。当然，四种字符（不区分大小写）的个数不一定是一样多的，若某
    种字符已经输出完，则余下的字符仍按GPLT的顺序打印，直到所有字符都被输出。
    */

#include<stdio.h>
int main()
{
    char a[10001];
    int g=0,p=0,l=0,t=0,i=0;
    gets(a);
    while(a[i]!='\0'){
        if(a[i]=='G'||a[i]=='g')
            g++;
        if(a[i]=='P'||a[i]=='p')
            p++;
        if(a[i]=='L'||a[i]=='l')
            l++;
        if(a[i]=='T'||a[i]=='t')
            t++;
        i++;
    }
    while(g!=0||p!=0||l!=0||t!=0){
        if(g!=0){
            printf("G");
            g--;
        }
        if(p!=0){
            printf("P");
            p--;
        }
        if(l!=0){
            printf("L");
            l--;
        }
        if(t!=0){
            printf("T");
            t--;
        }
    }
    return 0;
}