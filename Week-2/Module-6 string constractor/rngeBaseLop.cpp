#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;

    cout << a << endl;
    for (int i = 0; i < a.size(); i++)
    {
        // cout << a[i] << endl;
    }

    for (char c : a)
    {
        cout << c << endl;
    }

    return 0;
}