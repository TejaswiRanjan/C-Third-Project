/*
Write a program to take input from user for cost price (C.P) and selling price(S.P) and calculate profit or Loss.

Explaination :
Formula for profit and loss
profit = S.P - C.P
Loss = C.P - S.P
(S.P is selling price and C.P is Cost price)

Sample Input : 
Enter cost price : 4000
Enter selling price : 9560

Sample Output :
profit = 5560
*/

#include<iostream>
using namespace std;
int main(){

    int CP,SP;

    cout<<"Enter the cost price : ";
    cin>>CP;
    cout<<"Enter the selling price : ";
    cin>>SP;

    int profit = SP - CP;
    int loss = CP - SP;

    if(CP<SP){
        cout<<"Profit = "<<profit;

    }else {
        cout<<"Loss = "<<loss;
    }

}