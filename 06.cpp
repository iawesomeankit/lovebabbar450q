#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    int arr[] = {10, 60, 35, 46, 50, 90}, n = 6;
    printArray(arr, 6);
    reverseArray(arr, 0, n - 1);
    printArray(arr, 6);

    return 0;
}