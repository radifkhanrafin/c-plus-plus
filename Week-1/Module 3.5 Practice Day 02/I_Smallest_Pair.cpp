#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, sum, miniSum = INT_MAX;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + j - i;
                if (sum < miniSum)
                {
                    miniSum = sum;
                }
            }
        }
        cout << miniSum << endl;
    }

    return 0;
}