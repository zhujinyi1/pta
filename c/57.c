/*7-57 交换最小值和最大值
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。*/
#include <stdio.h>

int main()
{
	int n,i,min,max,mi,ma,a[10];
	int temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}

	for(i=0;i<n;i++){
		if(a[i]==max){
			temp=a[n-1];
			a[n-1]=max;
			a[i]=temp;
		}
	}
	for(i=0;i<n;i++){
		if(min==a[i]){
			temp=a[0];
			a[0]=min;
			a[i]=temp;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
    return 0;
}