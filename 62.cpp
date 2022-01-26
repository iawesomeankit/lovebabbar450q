#include <iostream>
#include <cstring>
using namespace std;
void areRotations(string s1)
{
    for (int i = 0; s1[i] != '\0'; i++)
    {

        int count = 1;
        for (int j = i + 1; s1[j] != '\0'; j++)
        {
            if (s1[i] == s1[j])
            {
                count++;
            }
        }
        cout << count << s1[i];
    }
}

int main()
{
    string s1 = "332455";
    areRotations(s1);
    return 0;
}