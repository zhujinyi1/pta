/*如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。我们用数字1到7对应星期一到星期日。
给定某一天，请你输出那天的“后天”是星期几。*/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=(a+2)%7;
    if(b==0){
        b=7;
    }
    printf("%d",b);
    return 0;
}