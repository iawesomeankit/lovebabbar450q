#include <iostream>
#include <cstring>
using namespace std;
void ispalindrome(string s, int n)
{
    char s1[10];

    for (int i = n - 2, j = 0; i >= 0; i--, j++)
    {
        s1[j] = s[i];
    }
    if (s == s1)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
}
int main()
{
    char s[] = "madmam";
    int n = sizeof(s);
    ispalindrome(s, n);
    return 0;
}