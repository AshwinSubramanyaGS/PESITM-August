#include<iostream>
#include<string>

using namespace std;

class Car{
   string horn_type;
    public: void horn(){cout<<horn_type<<"\n";}  
    Car(){
        horn_type="default horn";
    }
    Car(string horn_type){
        this->horn_type=horn_type;
    }
    Car(const Car& c){
        horn_type=c.horn_type;
    }

};

int main(){
    Car ob;
    ob.horn();
    Car ob2=string("modified horn");
    ob2.horn();
    Car ob3=ob;
    ob3.horn();
}