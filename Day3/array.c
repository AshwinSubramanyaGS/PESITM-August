/*
    syntax: declaration : <dt> arrname[size], ;

             initialization : <dt> arrname[not required] ={val,,,,,}
             useage:        arrname[index]
*/
#include<stdio.h>

int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0 ; i<size ;++i)
        scanf("%i",&arr[i]);

    printf("array contents are:\n");
    for(int i=0 ; i<size ;printf("%d ",arr[i++]));

}