//»»Ó²±Ò
#include<stdio.h>
int main()
{
	int m,i,j,k,count=0;
	scanf("%d",&m);
	for(i=m/5;i>0;i--){
		for(j=m/2;j>0;j--){
			for(k=m;k>0;k--){
				if(5*i+2*j+k==m){
					count++;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
					}
				}
			}
		}
	printf("count = %d",count);
	return 0 ;
}