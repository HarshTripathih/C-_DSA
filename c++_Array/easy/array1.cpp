#include<iostream>
using namespace std;
int main(){
    int a,n=5;
    int arr[n];
    cin>>a;
    for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}