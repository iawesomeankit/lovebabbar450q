#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int maxLoot(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return a[0];
    }
    if (n == 2)
    {
        return max(a[0], a[1]);
    }
    int *b = new int(n);
    b[0] = a[0];
    b[1] = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        b[i] = max(b[i - 2] + a[i], b[i - 1]);
    }
    return b[n - 1];
}

int main()
{
    int a[] = {6, 7, 1, 3, 8, 2, 4}, n = 7;
    int max = maxLoot(a, n);
    cout << max;

    return 0;
}