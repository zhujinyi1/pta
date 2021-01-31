/*
    到底有多二
    一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加
    0.5倍；如果还是个偶数，则再增加1倍。例如数字-13142223336是个11位数，其中有3个2，并且是负
    数，也是偶数，则它的犯二程度计算为：3/11×1.5×2×100%，约为81.82%。本题就请你计算一个给定整
    数到底有多二。
*/
#include<stdio.h>
//水题大家可以练习下
int main(){
  char Input[1000];
  float flag =1; int oushu =1, i, n = 0;
  float out;
  scanf("%s", &Input);
  if (Input[0] =='-'){//判断负号
    flag = 1.5;
  }
  for (i =0; Input[i] !='\0'; i++){//判断输入位数
  if (Input[i] =='2')
    n++;
  }
  if ((Input[i -1] - 48) % 2 ==0){//判断偶数
    oushu = 2;
  }
  if (flag ==1.5){//如果偶数，即-号占了位置
    i--;
  }
  out = (float)n / (float)i*flag*oushu*100;//输出
  printf("%.2f%%",out);
  return 0;
}