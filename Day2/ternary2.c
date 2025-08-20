#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%i%d",&n1,&n2);
    n1>n2 ?printf("%d is larger than %d",n1,n2) : printf("%d is larger than %d",n2,n1);
}