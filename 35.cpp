#include <iostream>
#include <algorithm>
using namespace std;
void findMinDiff(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int minDiff = INT8_MAX;
    int cdiff = 0;
    for (int i = 0; i + x - 1 < n; i++)
    {
        cdiff = arr[i + x - 1] - arr[i];
        if (cdiff < minDiff)
        {
            minDiff = cdiff;
        }
    }
    cout << minDiff;
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56}, n = 7, x = 3;
    findMinDiff(arr, n, x);
    return 0;
}