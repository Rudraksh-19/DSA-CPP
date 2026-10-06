#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num<=9999 && num>=1000) cout<<num<<" is a Four Digit Number.";
    else cout<<"Not a Four Digit Number.";
}