/*�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ
����ô��Ӧ������(foot+inch/12)��0.3048����
�ڣ�����û������������������ô��ӦӢ�Ƴ���
��Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣*/
#include <stdio.h>

int main(){

 int cmlen;

 scanf("%d",&cmlen);

 int foot= cmlen/100.0/0.3048;

 int inch = (cmlen/100.0/0.3048-foot)*12;

 printf("%d %d\n",foot,inch);

return 0;}