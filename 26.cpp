#include <iostream>
using namespace std;
void subArrayZeroSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int csum = 0;
        for (int j = i; j < n; j++)
        {
            csum = csum + arr[j];

            if (csum == 0)
            {
                cout << "yes";
            }
        }
    }
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6}, n = 5;
    subArrayZeroSum(arr, n);

    return 0;
}