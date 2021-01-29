//º«ÐÅµã±ø
#include<stdio.h>
int main(){
    int a=21;
    while(a%5!=1||a%6!=5||a%7!=4||a%11!=10){
        a++;
    }
    printf("%d",a);
    return 0;
}
