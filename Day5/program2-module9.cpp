#include<bits/stdc++.h>
#include<string>
#include<functional>
using namespace std;

class Car{
    string brand;
    int year;
    

    public: void setData(string,int);
    void displayData();
};

int main(){
    int a;
    string n;
    getline(cin,n);
    cin>>a;
    Car c1;
    c1.setData(n,a);
    c1.displayData();

}
void Car::setData(string brand,int year){
    this->brand=brand;
    this->year=year;


}
void Car::displayData(){
    cout<<"Car Brand:" <<brand<<"\nManufactur Year: "<<year;
}