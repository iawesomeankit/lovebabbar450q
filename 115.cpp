#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void findSubarray(int arr1[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 0)
        {
            count++;
        }
        int csum = arr1[i];
        for (int j = i + 1; j < n; j++)
        {
            csum = csum + arr1[j];
            if (csum == 0)
            {
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int arr1[] = {0, 0, 5, 5, 0, 0}, n = 6;
    findSubarray(arr1, n);

    return 0;
}