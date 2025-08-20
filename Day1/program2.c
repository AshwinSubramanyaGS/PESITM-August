#include<stdio.h>

int main(){

    int change=0,no=0;
    scanf("%i",&change);
    no=change/100;
    change%=100;
    no+=change/50;
    change%=50;
    no+=change/10;
    change%=10;
    no+=change/5;
    change%=5;
    printf("%d",no);

}