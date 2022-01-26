#include <iostream>
using namespace std;
void rotateArray(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 60, 35, 46, 50, 90}, n = 6;
    printArray(arr, n);
    rotateArray(arr, n);
    printArray(arr, n);

    return 0;
}