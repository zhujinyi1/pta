//������ͺ���߼۸����
#include <stdio.h>
#include <string.h>
struct Book
{
    double price;
    char name[31];
} book;
 
int main()
{
    int i,max = 0,min = 0;
    int n;
    char c;
    scanf("%d",&n);//��ȡn֮�󻺳��������ݣ�"\n"
    struct Book book[n];
    for(i=0; i<n; i++)
    {
        scanf("%c",&c);//���뻺������"\n"
        gets(book[i].name);
        scanf("%lf",&book[i].price);
        if(book[i].price>book[max].price)
        {
            max = i;
        }
        if(book[i].price<book[min].price)
        {
            min = i;
        }
    }
    printf("%.2lf, %s\n",book[max].price,book[max].name);
    printf("%.2lf, %s\n",book[min].price,book[min].name);
    return 0;
}