#include<iostream>
using namespace std;
int main(){
    float SellingPrice, CostPrice, Profit, Loss;
    cout<<"Enter Selling Price : ";
    cin>>SellingPrice;
    cout<<"Enter Cost Price : ";
    cin>>CostPrice;

    Profit = SellingPrice - CostPrice;
    Loss = CostPrice - SellingPrice;

    if(SellingPrice > CostPrice) cout<<"Profit is : "<<Profit;
    else if(CostPrice > SellingPrice) cout<<"Loss is : "<<Loss;
    else if(SellingPrice == CostPrice) cout<<"No Profit, No Loss";
    else cout<<"Wrong input! ";
}