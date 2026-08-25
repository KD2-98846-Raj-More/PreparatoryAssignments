/*Accept n numbers through command-line arguments and find and display the maximum number*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int max = atoi(argv[1]);

    for(int i = 2; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if(num > max)
        {
            max = num;
        }
    }

    cout << "Maximum Number = " << max;

    return 0;
}