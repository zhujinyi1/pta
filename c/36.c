//����Ҫ���д������hh:mm:ss�ĸ�ʽ���ĳ����ʱ���ٹ�n����ʱ��ֵ������23:59:59�ʹ�0�㿪ʼ��ʱ����
#include<stdio.h>
int main()
{
    int h,m,s,t;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&t);
    h=(h+(m+(t+s)/60)/60)%24;
    m=(m+(t+s)/60)%60;
    s=(s+t)%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}