#include<stdio.h>

int main(){
    int v,w,TW,FW;
    scanf("%d%d",&v,&w);
    if(v==0||w==0)
        printf("0 0");
    else{
        FW=(w-(2*v))/2;
        TW=v-FW;
        printf("TW=%d FW=%d",TW,FW);
    }
}
