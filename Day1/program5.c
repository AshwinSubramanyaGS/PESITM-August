#include<stdio.h>

int main(){
    int tkno=0,ld=0;
    scanf("%d",&tkno);
    ld=tkno%10;
    if(ld==3||ld==8) {
        printf("Lucky Winner");
      }else{  
        printf("Not a Lucky Winner") ;
    }
}