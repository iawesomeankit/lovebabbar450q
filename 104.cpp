#include <iostream>
#include <algorithm>
using namespace std;
void countSquares(int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (i * i < n)
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int n = 9;
    countSquares(n);

    return 0;
}