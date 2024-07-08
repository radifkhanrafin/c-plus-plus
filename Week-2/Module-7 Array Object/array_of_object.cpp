#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    float mark;
};

int main()
{
    int n;
    cin >> n;
    // cin.ignore();
    student arr[n];
    // cout << n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].mark;
        }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].mark << endl;
    }

    // cout << "";
    return 0;
}