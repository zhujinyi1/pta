/*
微博上有个自称“大笨钟V”的家伙，每天敲钟催促码农们爱惜身体早点睡觉。不过由于笨钟自己作息也不是很规律，
所以敲钟并不定时。一般敲钟的点数是根据敲钟时间而定的，如果正好在某个整点敲，那么“当”数就等于那个整点
数；如果过了整点，就敲下一个整点数。另外，虽然一天有24小时，钟却是只在后半天敲1~12下。例如在23:00敲
钟，就是“当当当当当当当当当当当”，而到了23:01就会是“当当当当当当当当当当当当”。在午夜00:00到中午12:00
期间（端点时间包括在内），笨钟是不敲的。
下面就请你写个程序，根据当前时间替大笨钟敲钟。*/
#include<stdio.h>
int main()
{
    int h,m,i;
    scanf("%02d:%02d",&h,&m);
    if((h>=0&&h<=11)||h==12&&m==0){
        printf("Only %02d:%02d.  Too early to Dang.",h,m);
    }
    else{
        for(i=1;i<=h-12;i++){
            printf("Dang");
        }
        if(m!=0){
            printf("Dang");
        }
    }
    return 0;
}