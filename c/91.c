//最长的对称字串
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1001
int main(){
    //要求输出最大对称子串的长度
    //char str[MAX_LEN]="Is PAT&TAP symmetric?";
    char str[MAX_LEN];
    int i, fore, back, maxSymLen, symLen;
    gets(str);
    maxSymLen = 1;
    for(i=0; i<strlen(str); i++){ //从第二个字符开始
        //对称字符串长度为奇数的情况
        symLen = 1;
        fore=i-1;
        back=i+1;
        while( fore>=0 && back<strlen(str)){
            if(str[fore]==str[back]){
                symLen += 2;
            }
            else{
                break;
            }
            fore--;
            back++;
        }
        if(symLen>maxSymLen){
            maxSymLen = symLen;
        }
        //对称字符串长度为偶数的情况
        symLen = 0;
        fore=i;
        back=i+1;
        while( fore>=0 && back<strlen(str)){
            if(str[fore]==str[back]){
                symLen += 2;
            }
            else{
                break;
            }
            fore--;
            back++;
        }
        if(symLen>maxSymLen){
            maxSymLen = symLen;
        }
    }
    printf("%d\n", maxSymLen);

    return 0;
}