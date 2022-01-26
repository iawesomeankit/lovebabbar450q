#include <iostream>
#include <cstring>
using namespace std;

void longestPalin(string s1)
{
    int mcount = INT8_MIN;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        int ccount = 1;
        string cstr = s1[i];
        for (int j = i + 1; s1[j] != '\0'; j++)
        {
            string strrevv = reverse(cstr.begin(), cstr.end());

            if (cstr == strrevv)
            {
                cstr = cstr + s1[j];
                ccount++;
            }
            else
            {
                break;
            }
        }
        if (ccount > mcount)
        {
            mcount = ccount;
        }
    }
    cout << mcount;
}

int main()
{
    string s1 = "aaaabbaa";
    longestPalin(s1);
    return 0;
}