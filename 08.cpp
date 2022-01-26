#include <iostream>
#include <algorithm>
using namespace std;
void kthMinAndMax(int arr[], int n, int k)
{
    sort(arr, arr + n);
    cout << arr[k - 1] << endl;
    cout << arr[n - k];
}
void printArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 60, 35, 46, 50, 90}, n = 6;
    printArray(arr, 6);
    kthMinAndMax(arr, 6, 2);

    return 0;
}