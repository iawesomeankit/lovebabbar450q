#include <iostream>
using namespace std;
int fun(int);

int main()
{
    int f, n = 5;
    f = fun(n);
    cout << f;
    return 0;
}
int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fun(n - 1);
    }
}