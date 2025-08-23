#include<bits/stdc++.h>
#include<functional>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;cin>>arr[i++]);
    sort(arr,arr+n);
    sort(arr+(n/2),arr+n,greater<int>());
    for(int i=0;i<n;cout<<arr[i++]<<" ");
}