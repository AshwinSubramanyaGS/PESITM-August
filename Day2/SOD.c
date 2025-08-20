//sum of digits of number
#include<stdio.h>
int main(){
    int number,temp,sod=0;
    scanf("%d",&number);
    temp=number;
    while(number!=0){
        sod+=number%10;
        number/=10;
    }
    printf("Sum of digits of %d is %d",temp,sod);
}