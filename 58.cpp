#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[] = "madam";
    int n = sizeof(s);
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n - 1; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                cout << s[i] << count << " ";
            }
        }
    }
    return 0;
}