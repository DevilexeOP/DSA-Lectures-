#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        // check last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
        
    }
    return 0;
}