#include <iostream>
#include <algorithm>
using namespace std;
void findMinDiff(int arr[], int n, int x)
{
    int mlenght = INT8_MAX;
    int cadd;
    int count;

    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        cadd = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            count = count + 1;
            cadd = cadd + arr[j];
            if (cadd > x)
            {
                break;
            }
        }
        if (count < mlenght && cadd > x)
        {
            mlenght = count;
        }
    }
    cout << mlenght;
}

int main()
{
    int arr[] = {1, 10, 5, 2, 7}, n = 5, x = 9;
    findMinDiff(arr, n, x);
    return 0;
}