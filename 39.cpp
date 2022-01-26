#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 121, r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome ";
    }

    return 0;
}