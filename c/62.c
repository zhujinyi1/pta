//输出最小的字符串
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
    char a[1000][80];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		scanf("%s",a[i]);
	char min[80];
	strcpy(min,a[0]);
	for(int i=0;i<n;i++)
	{
		if(strcmp(min,a[i])>0)
		{
			strcpy(min,a[i]);
		}
	}
	printf("Min is: %s",min);
}