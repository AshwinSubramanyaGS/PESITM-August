//print second half of a string in reverse
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;
    scanf("%s",str);
    for(i=strlen(str)-1;i>=strlen(str)/2;i--)
        printf("%c",str[i]);
}