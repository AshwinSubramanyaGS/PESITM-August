#include<stdio.h>

int main(){
    char a='C' ,*p=&a;
    *p='a';
    printf("variable val %c variable add %p",a,&a);
    printf("\ntarg val %c targ add %p pointer add %p",*p, p,&p);
}