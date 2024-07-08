#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    string s;
    // cin >> s; // when input has no space
    // cin.getline(s,1001); //when use char s[1001]

    // for this case
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}