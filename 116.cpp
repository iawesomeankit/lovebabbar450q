#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
void productExceptSelf(int arr1[], int n)
{
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro = pro * arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        pro = 1800;
        pro = pro / arr1[i];
        cout << pro << endl;
    }
}

int main()
{
    int arr1[] = {10, 3, 5, 6, 2}, n = 5;
    productExceptSelf(arr1, n);

    return 0;
}