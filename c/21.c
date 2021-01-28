//求最大公因数，最小公倍数
#include<stdio.h>
int main(){
int x,y,m,n,t;
scanf("%d %d",&m,&n);
x=m;
y=n;
while(y!=0){
t=x%y;x=y;y=t;
}
printf("%d %d",x,m*n/x);
return 0;
}