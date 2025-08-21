//print even sum and odd sum of array
#include<stdio.h>

int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0 ; i<size ;++i)
        scanf("%i",&arr[i]);
        
    printf("array contents before sort are:\n");
    for(int i=0 ; i<size ;i++)
        printf("%d ",arr[i]);
    
    //sorting logic
    for(int i=0;i<size;i++){
        int temp=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[temp])
                temp=j;
        }
        if(temp!=i){
            arr[i]=arr[i]+arr[temp];
            arr[temp]=arr[i]-arr[temp];
            arr[i]=arr[i]-arr[temp];
        }
    }

    printf("\narray contents after sort are:\n");
    for(int i=0 ; i<size ;i++)
        printf("%d ",arr[i]);
}       