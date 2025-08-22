#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)//for(i=0;i<strlen(str);i++)
        printf("%c",str[i]);
    printf("%d",str[i]);
}