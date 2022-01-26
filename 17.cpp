#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0, k = n - 1;
    while (i <= k && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            swap(arr2[j++], arr1[k--]);
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < m; j++)
    {
        cout << arr2[j] << " ";
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9}, n = 4, m = 5;
    merge(arr1, arr2, n, m);

    return 0;
}