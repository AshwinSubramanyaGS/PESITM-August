#include<stdio.h>

int main(){
    int n, stocks[100],min,max;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",stocks[i++]));
    min=max=stocks[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min)min=a[i];
    }
    printf("%d",max-min);
}