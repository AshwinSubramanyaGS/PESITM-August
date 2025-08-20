//Print 1, 2, 4, 7, 11, 16, 22, …N
#include<stdio.h>
int main(){
    int num,N,i;
    scanf("%d",&N);
    num=1;
    
    for(int i=1 ;num<=N;i=i+1){
       printf("%d, ",num);
       num+=i;
       }
}