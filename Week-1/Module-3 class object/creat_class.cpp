#include <iostream>
using namespace std;
class student
{
public:
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    student a, b, c;
    // namer modde space thakle .getline use korte hobe & line break korte hobe ,

    // for input radif khan 4005 3.60
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    getchar(); // jate enter jonno pblm na hou
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    getchar();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.cgpa;
    // for input : radif 4005 3.60
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;
    cin >> c.name >> c.roll >> c.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    cout << c.name << " " << c.roll << " " << c.cgpa << endl;
    return 0;
}