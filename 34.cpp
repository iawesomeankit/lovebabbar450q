#include <iostream>
#include <algorithm>
using namespace std;
void trappingWater(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                count = count + arr[i] - arr[j];
            }
            else
            {
                break;
            }
        }
        cout << count;
        break;
    }
}

int main()
{
    int arr[] = {6, 9, 9}, n = 3;
    trappingWater(arr, n);
    return 0;
}