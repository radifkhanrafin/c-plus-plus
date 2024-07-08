#include <iostream>
using namespace std;

int main()
{
    string a = "I'm Radif Khan Husband Of Nazifa";
    cout << a << endl;
    // Check String Length
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    cout << "empty"<<a.empty()<<endl;
    a.resize(10);
    cout << a << endl;
    a.resize(20, 'Faka Jyga Puron');
    cout << a << endl;

    a.clear();
    cout << a << endl;
    return 0;
}