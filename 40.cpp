#include <iostream>
#include <algorithm>
using namespace std;
void find_median(int arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
    {
        cout << (arr[(n - 1) / 2] + arr[(n + 1) / 2]) / 2;
    }
    else
    {
        cout << arr[(n - 1) / 2];
    }
}

int main()
{
    int arr[] = {90, 100, 78, 91}, n = 4;
    find_median(arr, n);
    return 0;
}