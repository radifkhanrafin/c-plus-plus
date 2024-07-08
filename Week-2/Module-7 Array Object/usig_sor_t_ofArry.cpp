#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
    // Student(string name, int roll, int mark)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->mark = mark;
    // }
};

bool cmp(Student a, Student b)
{
    // if (a.mark >= b.mark)
    //     return true;
    // else
    //     return false;

        return a.mark >= b.mark;
}
int main()
{
    int n;
    cin >> n;
    Student arry[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arry[i].name;
        cin.ignore();
        cin >> arry[i].roll >> arry[i].mark;
    }
    sort(arry, arry + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i].name << " " << arry[i].roll << " " << arry[i].mark << " " << endl;
    }

    return 0;
}