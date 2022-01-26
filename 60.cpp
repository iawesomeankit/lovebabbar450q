#include <iostream>
#include <cstring>
using namespace std;
void areRotations(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    string temp = s1 + s1;
    if (temp.find(s2) != string::npos)
    {
        cout << true;
    }
}

int main()
{
    string s1 = "ankit", s2 = "kitan";
    areRotations(s1, s2);
    return 0;
}