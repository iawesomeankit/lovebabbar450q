#include <iostream>
#include <algorithm>
using namespace std;
void negativeFirst(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
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
    int arr[] = {10, -24, 335, 46, -26, 35}, n = 6;
    printArray(arr, 6);
    negativeFirst(arr, 6);
    printArray(arr, 6);

    return 0;
}