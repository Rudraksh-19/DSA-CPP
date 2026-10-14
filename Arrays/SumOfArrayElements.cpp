#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,10,15,20,25,30,35};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"The sum of array elements :- "<<sum<<endl;
}