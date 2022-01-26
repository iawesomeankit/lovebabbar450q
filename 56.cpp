#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int n = sizeof(s);
    for (int i = 0, j = n - 2; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    cout << s;

    return 0;
}