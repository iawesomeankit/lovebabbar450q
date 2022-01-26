#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void minSwaps(int arr1[], int n)
{
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr1[i] < arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int arr1[] = {2, 8, 5, 4}, n = 4;
    minSwaps(arr1, n);

    return 0;
}