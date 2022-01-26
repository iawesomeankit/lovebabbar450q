#include <iostream>
using namespace std;
int kadaneArray(int arr[], int n)
{
    int csum = 0, msum = 0;
    for (int i = 0; i < n; i++)
    {
        csum = csum + arr[i];
        if (csum > msum)
        {
            msum = csum;
        }
        if (csum < 0)
        {
            csum = 0;
        }
    }
    return msum;
}

int main()
{
    int arr[] = {-10, 60, -35, 46, -50, 90}, n = 6;
    int max = kadaneArray(arr, n);
    cout << max;
    return 0;
}