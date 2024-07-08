#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    swap(a, b);
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << endl;

    int maxi = max({a, b, c, d, e, f});
    cout << maxi << endl;
    int mini = min({a, b, c, d, e, f});
    cout << mini << endl;
    // int swapValue =

    return 0;
}