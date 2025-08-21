//print only even no of array
#include<stdio.h>

int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0 ; i<size ;++i)
        scanf("%i",&arr[i]);
    
    printf("array contents are:\n");
    for(int i=0 ; i<size ;i++)
    {
        if (arr[i]%2==0)
        printf("%d ",arr[i]);
    }

}