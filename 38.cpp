#include <iostream>
#include <algorithm>
using namespace std;
void minSwap(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            count = count + 1;
        }
    }
    int mswap = 0;

    for (int j = 0; j < count; j++)
    {
        if (arr[j] > x)
        {
            mswap = mswap + 1;
        }
    }
    cout << mswap;
}

int main()
{
    int arr[] = {2, 7, 9, 5, 8, 7, 4}, n = 7, x = 6;
    minSwap(arr, n, x);
    return 0;
}