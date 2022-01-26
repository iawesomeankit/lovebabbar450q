#include <iostream>
using namespace std;
int subArrayPro(int arr[], int n)
{
    int cproduct = 1, mproduct = 1;
    for (int i = 0; i < n; i++)
    {
        cproduct = cproduct * arr[i];
        for (int j = i + 1; j < n; j++)
        {
            cproduct = cproduct * arr[j];
            if (cproduct == 0)
            {
                cproduct = 1;
            }
            else if (cproduct > mproduct)
            {
                mproduct = cproduct;
            }
        }
    }
    return mproduct;
}

int main()
{
    int arr[] = {2, 3, 4, 5, -1, 0}, n = 6;
    int mpro = subArrayPro(arr, n);
    cout << mpro;

    return 0;
}