//Êä³öÈòÄê
#include<stdio.h>
int main()
{
    int i,j,m=0;
    scanf("%d",&j);
    if(j<=2000||j>2100)
    {
        printf("Invalid year!");
        return 0;
    }
    for(i=2001;i<=j;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
        {
            printf("%d\n",i);
            m++;
        }
    }
   
    if(m==0)
    {
        printf("None");
    }
    return 0;
}