#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void nameFun()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    student radif("Radif Khan Rafin", 21);
    radif.nameFun();
    // cout << radif.name << " " << radif.age << endl;
    return 0;
}