#include <iostream>
#include <algorithm>
using namespace std;
void find(int arr[], int n, int x)
{
    int cpos;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] = x)
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, n = 9, x = 5;
    find(arr, 9, 5);

    return 0;
}