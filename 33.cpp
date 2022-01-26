#include <iostream>
#include <algorithm>
using namespace std;
void find3Numbers(int arr[], int n, int g)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == g)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                }
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 4, 3, 6}, n = 5, g = 10;
    find3Numbers(arr, n, g);
    return 0;
}