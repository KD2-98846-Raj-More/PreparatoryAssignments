/*Q4. Student Grade 
Write a program to calculate the grade of a student. 
The student has five subjects, and marks for each subject are entered from the keyboard. Assume that each 
subject is evaluated out of 20 marks, making the total marks out of 100. 
 
 
Assign the grade according to the following rules: 
Total Marks Grade 

90–100 Ex 
80–89 A 
70–79 B 
60–69 C 
Below 60 F 

Display the total marks and the corresponding grade. */


#include <iostream>
using namespace std;

int main()
{
    int marks;
    int total = 0;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;

        total = total + marks;
    }

    cout << "Total Marks = " << total << endl;

    if(total >= 90)
    {
        cout << "Grade = Ex";
    }
    else if(total >= 80)
    {
        cout << "Grade = A";
    }
    else if(total >= 70)
    {
        cout << "Grade = B";
    }
    else if(total >= 60)
    {
        cout << "Grade = C";
    }
    else
    {
        cout << "Grade = F";
    }

    return 0;
}