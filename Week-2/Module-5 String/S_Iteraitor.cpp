#include <iostream>
using namespace std;

int main()
{
    string s;
    // string::iterator it;
    cin>>s;
    for (auto it =s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }
    
    cout << "";
    return 0;
}