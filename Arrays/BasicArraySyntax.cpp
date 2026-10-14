#include<iostream>
using namespace std;
int main(){
    int marks [] = {10,20,30,40,50,60};
    int n = sizeof(marks)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
}