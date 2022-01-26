#include <iostream>
using namespace std;
int reverseArray(int arr[], int n)
{
    int csum = 0, msum = 0;
    for (int i = 0; i < n; i++)
    {
        csum = csum + arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                csum = arr[j] - arr[i];
                break;
            }
            else
            {
                csum = 0;
                break;
            }
        }
        if (csum > msum)
        {
            msum = csum;
        }
    }
    return msum;
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
    int arr[] = {7, 1, 5, 3, 6, 4}, n = 6;
    int max = reverseArray(arr, n);
    cout << max;

    return 0;
}