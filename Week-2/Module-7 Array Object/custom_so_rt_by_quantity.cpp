#include <bits/stdc++.h>
using namespace std;

class sort_function
{

public:
    char value;
    int count;
};
bool compare(sort_function a, sort_function b)
{
    return a.count > b.count;
};
int main()
{
    string s;
    cin >> s;
    // cout << s;

    sort_function arry[26];
    for (int i = 0; i < 26; i++)
    {
        arry[i].value = char(i + 'a');
        arry[i].count = 0;
    }

    for (char c : s)
    {
        int ascii_value = int(c - 'a');
        arry[ascii_value].count++;
        // cout << ascii_value << " " << c << endl;
    }

    sort(arry, arry + 26, compare);
    for (int i = 0; i < 26; i++)
    {
        if (arry[i].count > 0)
        {
            // cout << arry[i].value << " " << arry[i].count << endl;
            for (int j = 0; j <arry[i].count; j++)
            {
               cout << arry[i].value;
            // cout <<"max"<<"-"<<arry[j].count<<endl;
            }
        }
    }

    cout << "";
    return 0;
}