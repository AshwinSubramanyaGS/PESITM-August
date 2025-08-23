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

int main(){
    int a;
    string n;
    cin>>n>>a;
    Student s1;
    s1.setData(n,a);
    s1.displayData();

}
void Student::setData(string name,int age){
    this->name=name;
    this->age=age;
}
void Student::displayData(){
    cout<<"Student Name: "<<name<<"\nStudent Age: "<<age;
}