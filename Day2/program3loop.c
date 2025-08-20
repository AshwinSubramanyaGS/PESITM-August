/*
    * 
    * *  
    * * * 
    * * * *
    * * * * *
*/
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=0,count=0 ;count<number;i++){
        for(int j=0;j<=i;count++,j++)
            printf("* ");
        printf("\n");
    }
}