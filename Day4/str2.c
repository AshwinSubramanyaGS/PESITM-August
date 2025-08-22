//print first half of a string
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;
    scanf("%s",str);
    for(i=0;i<strlen(str)/2;i++)
        printf("%c",str[i]);
}