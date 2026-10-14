#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements : ";
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}