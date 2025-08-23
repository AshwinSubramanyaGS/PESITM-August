#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Parent{
    vector<int> arr;
    public:int fun(int x){
        while(x!=0){
            arr.push_back(x%10);
            x/=10;
        }
        int sum=0;
        for(int i=0;i<arr.size()-1;i++)
            for(int j=i+1;j<arr.size();j++)
                sum+=arr[i]+arr[j];
        return sum;
        }
};
class Child : public Parent{
    public: int fun(int x){
        return Parent::fun(x);
    }
};
int main(){
    Child ob;
    int no;
    cin>>no;
    cout<<ob.fun(no);

}