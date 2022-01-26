#include <iostream>
using namespace std;
void countPair(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int arr[] = {1, 5, 7, 1}, n = 4;
    countPair(arr, n, 12);

    return 0;
}