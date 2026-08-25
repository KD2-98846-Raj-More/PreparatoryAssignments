/*Q3. Fibonacci Series 
Write a program to generate and display the first n terms of the Fibonacci series.*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}