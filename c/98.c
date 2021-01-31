/*
    每个 PAT 考生在参加考试时都会被分配两个座位号，一个是试机座位，一个是考试座位。正常情况
    下，考生在入场时先得到试机座位号码，入座进入试机状态后，系统会显示该考生的考试座位号码，
    考试时考生需要换到考试座位就座。但有些考生迟到了，试机已经结束，他们只能拿着领到的试机座
    位号码求助于你，从后台查出他们的考试座位号码。
*/
#include<stdio.h>
struct stu{
    char a[17];
    int s;
    int k;
}stud[1001];
int main(){
    int j,n,m,i,b[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d %d",&stud[i].a,&stud[i].s,&stud[i].k);
    }
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(b[j]==stud[i].s){
                printf("%s %d\n",&stud[i].a,stud[i].k);
            }
        }
    }
    return 0;
}