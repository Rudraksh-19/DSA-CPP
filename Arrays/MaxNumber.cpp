#include<iostream>
using namespace std;
int main(){
    int marks[] = {15,47,65,14,25,35,78,98,45};
    int n = sizeof(marks)/sizeof(int);
    int big = INT32_MIN ;

    for(int i=0;i<n;i++){
        if (marks[i]>big) big = marks[i];
    }
    cout<<big<<" is the maximum number in the array ";
}