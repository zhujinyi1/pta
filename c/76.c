//����Ҫ����㲢���������n������k�������Լ����ǵĺ͡�
#include<stdio.h>
int main()
{
    int n,m,i,j,t=0,s=0,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i>=2;i--){
        t=0;
        for(j=2;j<i;j++){
            if(i%j==0)
            {
                    t=1;
                    break;
            }
        }
        if(t==0){
            c++;
            s+=i;
            if(c==1){
                printf("%d",i);    
            }
            else{
                printf("+%d",i);
            }
        }
        if(c==n){
            break;
        }
    }
    printf("=%d",s);
    return 0;
}