// 3-5 Constructor and this Pointer with Arrow Sign
#include <iostream>
using namespace std;
class Student
{
public:
    char name[100];
    int cls, roll;
    float cg;
    Student(int cls, int r, float gp)
    {
        // name = n;
        (*this).cls = cls;
        // (*this).cls = cls == this->cls=cls;
        // (*this).cls mane class er cls  = cls r aita function er class ;
        roll = r;
        cg = gp;
    }
};
int main()
{
    Student a(10, 4005, 5);
    // Student a(cls, roll, gpa);
    // cin >> cls >> roll >> gpa;

    cout << a.cls << " " << a.roll << " " << a.cg << endl;
    return 0;
}