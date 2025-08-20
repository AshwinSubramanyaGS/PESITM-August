//Print 4, 16, 36, 64, ….N
#include<stdio.h>
int main(){
    int number,mul;
    scanf("%d",&number);
    
    for(int i=2 ;i*i<=number;i=i+2){
       (i+2)*(i+2)>=number ? printf("%d ",i*i) :
        printf("%d, ",i*i);
    }
}