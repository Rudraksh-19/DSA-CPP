#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,5};
    int n = sizeof(arr)/sizeof(int);
    int multiplication = 1;
    for(int i=0;i<n;i++){
        multiplication *= arr[i];
    }
    cout<<"The multiplication of array elements is :- "<<multiplication;
}