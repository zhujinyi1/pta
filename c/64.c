//����N��ְԱ����Ϣ�������������������ʡ��������ʺ�֧����Ҫ���д����˳�����ÿλְԱ��������ʵ�����ʣ�ʵ������=��������+��������-֧����
#include<stdio.h>

struct stuff{
    char name[12];
    double basic;
    double f;
    double spend;
    double end;
}s[100];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&s[i].name);
        scanf("%lf%lf%lf",&s[i].basic,&s[i].f,&s[i].spend);
        s[i].end = s[i].basic + s[i].f -s[i].spend;
    }
    for(i=0;i<n;i++){
        printf("%s %.2lf\n",s[i].name,s[i].end);
    }
    return 0;
}