#include <bits/stdc++.h>
using namespace std;

class student
{

public:
    string name;
    int roll;
    int mark;
};

bool compare(student a, student b)
{

    // for low to high
    // if (a.mark <= b.mark)
    //     return true;
    // else
    // return false;

    // for high to low

    // if (a.mark >= b.mark)
    //     return true;
    // else
    //     return false;

    // shortcut
    return a.mark <= b.mark;
}

int main()
{
    int n;
    cin >> n;
    student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }

    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }

    cout << "";
    return 0;
}