#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    // cout<<n;
    student data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i].name >> data[i].roll >> data[i].mark;
    }

    // High to low

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j <= n; j++)
    //     {
    //         if (data[i].mark > data[i].mark)
    //         {
    //             swap(data[i], data[j]);
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << data[i].name << " " << data[i].roll << " " << data[i].mark << endl;
    // }

    // low to high ;

    // cout << endl;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if ( data[i].mark < data[j].mark)
            {
                swap(data[i], data[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << data[i].name << " " << data[i].roll << " " << data[i].mark << endl;
    }

    return 0;
}