//��°ͺղ���

#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n)
{
	if(n==1) return 0;
	else if(n==2) return 1;
	
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	
	
	for(int i=2;i<n;i++)
	{
		
			if(prime(i)&&prime(n-i))//֮ǰ�õ��Ƕ��ţ����Ƕ��ŵĺ�����ֻ�ж϶��ź���ģ������ж϶���ǰ���
			{
				
				if(i>=n-i)
				printf("%d = %d + %d\n",n,n-i,i);
				else printf("%d = %d + %d\n",n,i,n-i);
				return 0;//���Ե��и���0���أ��ʼ���ص���1������
			}
		}
	return 0;
}