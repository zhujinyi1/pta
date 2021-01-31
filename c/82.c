//∆Ê≈º∑÷º“
#include<stdio.h>
int main()
{
    int a[1000],i,n,j=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            o++;
        }
        else{
            j++;
        }
    }
    printf("%d %d",j,o);
    return 0;

}