#include<iostream>
using namespace std;
int gcd(int ,int);
int main(){
    int a,b,Gcd;
    cin>>a>>b;
    Gcd=gcd(a,b);
    cout<<"LCM = "<<(a*b)/Gcd;
}

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}