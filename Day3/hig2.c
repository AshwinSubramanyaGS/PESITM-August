//print highest value in an array
#include<stdio.h>

int main(){
    int size,arr[100],highest,highest2;
    scanf("%d",&size);
    for(int i=0 ; i<size ;++i)
        scanf("%i",&arr[i]);
    highest =highest2 = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>highest){
            highest2 = highest;
            highest = arr[i];
        }
        else if(arr[i]>highest2){
            highest2 = arr[i];
        }
    }
    printf("2nd highest number is %d",highest2);

}