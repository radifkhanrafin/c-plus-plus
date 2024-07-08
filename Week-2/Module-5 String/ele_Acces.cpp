#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << s << endl;
    cout << s.at(5) << endl;
    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl;
    cout << s.front();

    return 0;
}