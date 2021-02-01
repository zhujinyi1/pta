//判断身份证是否合理

 #include <stdio.h>
  #include <string.h>
  #define ID_LEN 18
  #define CHECKCODE_LEN 10

 int main(){
    //N行输入N个18位的身份证号码
     char ID[ID_LEN+1];
     int weight[ID_LEN-1]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
     char M[CHECKCODE_LEN+1]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
     int N, i, j, Z;
     int allPassed=1; //假设全部通过，遇到非法号码时置0
     scanf("%d", &N);
     for(i=0; i<N; i++){
         Z = 0;
         scanf("%s", ID);
         for(j=0; j<ID_LEN-1; j++){
             Z += (ID[j]-'0')*weight[j];
         }
         Z %= 11;
         if(M[Z]!=ID[ID_LEN-1]){
             allPassed = 0;
             printf("%s\n", ID);
         }
     }
     if(allPassed){
             printf("All passed\n");
         }
 
     return 0;
 }