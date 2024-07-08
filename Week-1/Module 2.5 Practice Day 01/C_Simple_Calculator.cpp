#include <iostream>
using namespace std;

int main()
{
    int x, y, sum, mul, abs;
    cin >> x >> y;
    sum = x + y;
    mul = x * y;
    abs = x - y;
    cout << x << " + " << y << " = " << sum << endl
         << x << " * " << y << " = " << mul << endl
         << x << " - " << y << " = " << abs << endl;
    return 0;
}