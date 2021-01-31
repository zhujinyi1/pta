//Гізт

#include<stdio.h>
int main()
{
    char a[11];
    int b[10]={0},i,j,n,m=0,t,c[10];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        b[a[i]-48]++;
    }
    printf("int[] arr = new int[]{");
    n=0;
    for(i=9;i>=0;i--){
        if(b[i]!=0)
        {
            
            c[m]=i;
            m++;
            if(n!=0){
                printf(",%d",i);
            }
            if(n==0){
                printf("%d",i);
                n++;
            }   
        }
    }
    printf("}\nint[] index = new int[]{");
    n=0;
    for(i=0;a[i]!='\0';i++){
        for(j=0;j<m;j++){
            if(a[i]-48==c[j]){
                if(n!=0){
                    printf(",%d",j);
                }
                if(n==0){
                    printf("%d",j);
                    n++;
                }
            }
        }
    }
    printf("}\n");
    return 0;
}