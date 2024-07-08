#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int a = 10;
    int *a = new int;
    *a = 20;

    cout << a << endl;  // address
    cout << *a << endl; // value
    int *b = new int;
    *b = 20.155;

    cout << b << endl;  // address
    cout << *b << endl; // value
    return 0;
}