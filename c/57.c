/*7-57 ������Сֵ�����ֵ
����Ҫ���д�����Ƚ������һϵ�������е���Сֵ���һ����������Ȼ�����ֵ�����һ��������������������������С�

ע�⣺��Ŀ��֤������Сֵ����Ψһ�ġ�*/
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