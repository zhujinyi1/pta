/*¾ØÕóÏà³Ë*/

#include<stdio.h>
#include<string.h>
int main()
{
	int Ra,Ca,i,j,s,t;
	scanf("%d %d",&Ra,&Ca);
	int A[Ra][Ca];
	for(i=0;i<Ra;i++)
	{
		for(j=0;j<Ca;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	int Rb,Cb;
	scanf("%d %d",&Rb,&Cb);
	int B[Rb][Cb];
	for(i=0;i<Rb;i++)
	{
		for(j=0;j<Cb;j++)
		{
			scanf("%d",&B[i][j]);
		}
	} 
	if(Ca!=Rb)
	{
		printf("Error: %d != %d",Ca,Rb);
	}
	else
	{
		int sum[Ra][Cb];
		memset(sum,0,sizeof(sum)); 
		for(i=0;i<Ra;i++)
		{
			for(j=0;j<Cb;j++)
			{
				for(t=0;t<Ca;t++)
				{
					sum[i][j]=sum[i][j]+A[i][t]*B[t][j];
				}	
			}
		}
		printf("%d %d\n",Ra,Cb);
		for(i=0;i<Ra;i++)
		{
			printf("%d",sum[i][0]);
			for(j=1;j<Cb;j++)
			{
				printf(" %d",sum[i][j]);
			}
			if(i!=Ra-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
    int l1,h1,l2,h2,i,j,m;
    int s1[10000][10000],s2[10000][10000],s3[10000][10000];
    scanf("%d %d",&h1,&l1);
    for(i=0;i<h1;i++){
        for(j=0;j<l1;j++){
            scanf("%d",&s1[i][j]);
        }
    }
    scanf("%d %d",&h2,&l2);
    for(i=0;i<h2;i++){
        for(j=0;j<l2;j++){
            scanf("%d",&s2[i][j]);
        }
    }
    if(l1!=h2){
        printf("Error: %d != %d",l1,h2);
    }
    else{
        for(i=0;i<h1;i++){
            for(j=0;j<l2;j++){
                for(m=0;m<h2;m++)
                    s3[i][j]+=s1[i][m]*s2[m][j];
            }
        }
        printf("%d %d\n",h1,l2);
        for(i=0;i<h1;i++){
            for(j=0;j<l2;j++){
                printf("%d ",s3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
*/