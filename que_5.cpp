/*Q5. Character Classification 
Accept a string from the user and count/display the number of: 
 Uppercase letters 
 Lowercase letters 
 Digits 
 Other characters 
Display an appropriate message for each category.*/


#include <iostream>
using namespace std;

int main()
{
    char str[100];

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;

    cout << "Enter string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }

    cout << "Uppercase = " << upper << endl;
    cout << "Lowercase = " << lower << endl;
    cout << "Digits = " << digit << endl;
    cout << "Other characters = " << other;

    return 0;
}