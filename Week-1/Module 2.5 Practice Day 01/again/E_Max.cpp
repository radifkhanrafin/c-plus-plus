#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numbers[n], maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (numbers[i] > maxi)
        {
            maxi = numbers[i];
        }
    }

    cout << maxi << endl;
    return 0;
}