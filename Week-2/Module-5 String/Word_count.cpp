#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    string sent;
    getline(cin, sent);

    stringstream words(sent);
    // char  word;  //char dile okkhor asbe
    string word; // string dile word asbe
    while (words >> word)
    {
        cout << word << endl;
        count++;
    }

    cout <<count <<endl;
    return 0;
}