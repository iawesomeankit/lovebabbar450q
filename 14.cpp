#include <iostream>
#include <algorithm>
using namespace std;
int minhieghtTree(int arr[], int n, int k)
{
    int minhieghtTrree;
    sort(arr, arr + n);
    arr[0] = arr[0] + k;
    arr[n - 1] = arr[n - 1] - k;
    minhieghtTrree = arr[n - 1] - arr[0];
    return minhieghtTrree;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 60, 35, 46, 50, 90}, n = 6;
    int res = minhieghtTree(arr, n, 2);
    cout << res;

    return 0;
}