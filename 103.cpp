#include <iostream>
#include <algorithm>
using namespace std;
void search1(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
        }
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2}, n = 7, x = 0;
    search1(arr, n, x);

    return 0;
}