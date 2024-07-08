#include <iostream>
using namespace std;

int main()
{
    string s = "Hello World 1";
    cout << s << endl;
    string a("Hello World 2");
    cout << a << endl;
    string b("3.Hello World 2", 8);
    cout << b << endl;
    string new_s(s, 5);
    cout << new_s << endl;
    string new_number(5, 'a');
    cout << new_number << endl;
    return 0;
}