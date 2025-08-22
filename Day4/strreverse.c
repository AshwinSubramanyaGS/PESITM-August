//reversing a string
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0,n;
    scanf("%s",str);
    for(i=0,n=strlen(str);i<n/2;i++){
        str[i]=str[i]^str[n-i-1];
        str[n-i-1]=str[i]^str[n-i-1];
        str[i]=str[i]^str[n-i-1];
    }
        printf("%c",str[i]);
}