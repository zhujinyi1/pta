//找区间内所有的完数
#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    int i, j, k;
    int s, p, flag = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
        {
            flag = 1;
            printf("%d = ", i);
            p = 0;
            for (j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    p += j;
                    if (p != i)
                        printf("%d + ", j);
                    else
                        printf("%d\n", j);
                }
            }
        }
    }
    if (flag == 0)
        printf("None\n");
    return 0;

}

/*
#include<stdio.h>
int main()
{
	int a,b,i,j,s,k,m;
	scanf("%d %d",&a,&b);//输入两个数
	for(i=a;i<=b;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i)//判断是否是完数
		{
			printf("%d = 1",i);//为了简单输出  先把“完数 = 1”打印出来 因为肯定会有1 嘿嘿
			for(k=2;k<j;k++)//重复操作
			{
				if(i%k==0)
				{
					printf(" + %d",k);//注意加号前后面都有 空格
				}
			}
			printf("\n");//换行  否则有两个及两个以上的完数会一行输出
			m++;//判断完数个数  方便没有时输出None
		}
		
	}
	if(m==0)
		{
			printf("None\n");
		}
	return 0;
}
*/