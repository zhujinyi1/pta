//出生年
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
 int b[4]={0};//初始化数组
 int i,j,n,m,k,y,flag=0,max,t;
 scanf("%d %d",&y,&n);
 for(i=0;;i++){
  flag=1;//默认有一个不同的数字
  t=3;
  k=y;//用k进行下面的while循环，这样不会影响到y的值
  while(k!=0){
   b[t]=k%10;
   t--;
   k/=10;
  }//把年份的每个数字放到数组对应的位置中
  //因为年份递增所以明年的数字刚好覆盖今年的数字
  for(j=0;j<3;j++){
   for(k=j;k<4;k++){
    if(b[j]>b[k]){
     t=b[j];
     b[j]=b[k];
     b[k]=t;
    }
   }//给b冒泡排序，这里选择从小到大排序，这样就不用每次循环都初始化一遍
  }
  for(j=0;j<3;j++){
   if(b[j]-b[j+1]!=0){
    flag++;//判断并记录不同数字个数
   }
  }
  if(flag==n){
   printf("%d %04d",i,y);//输出（注意年份前面要补零）
   break;
  }
  else{
   y++;
  }
 }
}