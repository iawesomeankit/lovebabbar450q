#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int p = n + m;
    int *r = new int(p);
    for (int i = 0; i < n; i++)
    {
        r[i] = arr1[i];
    }
    for (int i = n, j = 0; j < m; i++, j++)
    {
        r[i] = arr2[j];
    }
    sort(r, r + p);
    for (int i = 0; i < p; i++)
    {
        cout << r[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9}, n = 4, m = 5;
    merge(arr1, arr2, n, m);

    return 0;
}