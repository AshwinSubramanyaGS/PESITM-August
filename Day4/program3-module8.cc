#include<iostream>
using namespace std;
int gcd(int ,int);
int main(){
    int a,b,ta,tb;
    cin>>a>>b;
    ta=a;
    tb=b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"LCM = "<<(ta*tb)/a;
}

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}