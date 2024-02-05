/*
Create a calculator using switch statement to perform addition,subtraction,multiplication and division.

Sample Input :
Enter an operator(+,-,*,/): -
Enter two numbers :
6
8

Sample Output : 6 - 8 = -2
*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    float a, b;

    cout << "Enter an operator : " << ch;
    cin >> ch;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    switch (ch)
    {
    case '+':
        cout << a << " + " << b <<" = "<< a + b;
        break;
    case '-':
        cout << a << " - " << b <<" = "<< a - b;
        break;
        case '*':
        cout << a << " * " << b <<" = "<< a * b;
        break;
        case '/':
        cout << a << " / " << b <<" = "<< a / b;
        break;

    default:
    cout<<"Not a valid operator thats why calculator cannot perform";
        break;
    }
}