/*
Write a program which takes the values of length and breadth from the and check if it is a square or not.

Sample Input :
Enter length : 5
Enter breadth : 4
Sample Output : It is a rectangle
*/

#include<iostream>
using namespace std;
int main(){

    int length,breadth;

    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;

    if(length == breadth){
        cout<<"It is a Square";
    }else{
        cout<<"It is a Rectangle";
    }
}