/*Q2. Factorial of a Number 
Write a program to calculate the factorial of a given non-negative integer.*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int fact = 1;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial = " << fact;

    return 0;
}