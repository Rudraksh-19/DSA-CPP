#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x coordinate : ";
    cin>>x;
    cout<<"Enter y coordinate : ";
    cin>>y;


    if(x>0 && y>0) cout<<"First Quadrant";
    else if (x<0 && y>0) cout<<"Second Quadrant";
    else if (x<0 && y<0) cout<<"Third Quadrant";
    else if (x>0 && y<0) cout<<"Forth Quadrant";
    else if(x==0 && y==0) cout<<"Origin";
    else if (x == 0) cout<<"Y-axis";
    else if (y == 0) cout<<"X-axis";
    else cout<<"Invalid x and y coordinates";
}