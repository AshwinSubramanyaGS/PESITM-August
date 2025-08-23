#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int add(int i,int j=0);
float add(float,float);
int main(){
    cout<<"enter two integers";
    int a,b;
    cin>>a>>b;
    cout<<"enter two float";
    float x,y;
    cin>>x>>y;
    cout<<add(a,b)<<endl<<add(x,y)<<endl<<add(12);
}
int add(int i,int j){return i+j;}
float add(float i,float j){return i+j;}