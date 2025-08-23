#include<iostream>
using namespace std;
int main(){
    int num,sod=0;
    cin>>num;
    while(num!=0){
        sod+=num%10;
        num/=10;
    }
    cout<<sod;
    
}
