//哥德巴赫猜想

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
		
			if(prime(i)&&prime(n-i))//之前用的是逗号，但是逗号的含义是只判断逗号后面的，而不判断都好前面的
			{
				
				if(i>=n-i)
				printf("%d = %d + %d\n",n,n-i,i);
				else printf("%d = %d + %d\n",n,i,n-i);
				return 0;//测试点有个非0返回，最开始返回的是1，错了
			}
		}
	return 0;
}