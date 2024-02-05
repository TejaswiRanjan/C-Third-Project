/*
Write a program to print absolute value of a number entered by user

Sample Input : -1
Sample Output : 1
*/
#include<cstdlib>
#include<iostream>

using namespace std;
int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    

    cout<<"The Absolute value of a given number is : "<<abs(num);

    return 0;
}