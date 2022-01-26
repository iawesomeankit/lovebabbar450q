#include <iostream>
#include <algorithm>
using namespace std;
void find(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == arr[i])
        {
            cout << arr[i];
        }
    }
}

int main()
{
    int arr[] = {15, 2, 45, 12, 7}, n = 5;
    find(arr, n);

    return 0;
}