#include <iostream>
using namespace std;

int main()
{
    // Q1 => Print even numbers 1 to n 
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}