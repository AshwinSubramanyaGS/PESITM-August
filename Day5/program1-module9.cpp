#include<bits/stdc++.h>
#include<string>
#include<functional>
using namespace std;

class Student{
    string name;
    int age;

    public: void setData(string,int);
    void displayData();
};

void Student::setData(string name,int age){
    this->name=name;
    this->age=age;
}
void Student::displayData(){
    cout<<name<<endl<<age;
}