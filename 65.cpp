#include <iostream>
#include <cstring>
using namespace std;

void longestPalin(string s1)
{
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << s1[k];
            }
            cout << endl;
        }
    }
}

int main()
{
    string s1 = "abc";
    longestPalin(s1);
    return 0;
}