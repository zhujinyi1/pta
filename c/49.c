//计算三角形周长和面积
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double s,l;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&c+b>a){
        l=a+b+c;
        s=sqrt(l/2*(l/2-a)*(l/2-b)*(l/2-c));
        printf("area = %.2lf; perimeter = %.2lf",s,l);
    }
    else
        printf("These sides do not correspond to a valid triangle");
    return 0;
}