#include <iostream>
using namespace std;
void minAndmax(int arr[], int n)
{
    int random = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > random)
        {
            random = arr[i];
        }
    }
    cout << random;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < random)
        {
            random = arr[i];
        }
    }
    cout << random;
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
    minAndmax(arr, 6);

    return 0;
}