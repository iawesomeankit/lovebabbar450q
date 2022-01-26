#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[], int l, int m, int h)
{
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        if (arr[m] == 1)
        {
            m++;
        }
        if (arr[m] == 2)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
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
    int arr[] = {1, 0, 0, 2, 1, 0}, n = 6;
    printArray(arr, 6);
    reverseArray(arr, 0, 0, 6);
    printArray(arr, 6);

    return 0;
}