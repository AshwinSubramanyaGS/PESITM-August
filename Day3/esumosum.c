//print even sum and odd sum of array
#include<stdio.h>

int main(){
    int size,arr[100],odd_sum=0,even_sum=0;
    scanf("%d",&size);
    for(int i=0 ; i<size ;++i)
        scanf("%i",&arr[i]);
        
    printf("array contents are:\n");
    for(int i=0 ; i<size ;i++)
    {
        if (arr[i]%2==0)
            even_sum+=arr[i];
        else
            odd_sum+=arr[i];
    }
    printf("even : %d odd : %d",even_sum,odd_sum);
}       