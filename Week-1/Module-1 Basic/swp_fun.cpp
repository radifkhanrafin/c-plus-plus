#include <iostream>
#include <utility>
using namespace std;

void swap_fun(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap_fun(&a, &b);
    cout << a << " " << b<<endl;
    swap(a,b);
    cout << a << " " << b;
    return 0;
}