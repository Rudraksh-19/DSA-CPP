#include<iostream>
using namespace std;
int main(){
    float num ;
    cout<<"Enter a real number : ";
    cin>>num;

    int n = int(num);
    if(num == n) cout<<"It is an Integer";
    else cout<<"It is not an Integer";
}