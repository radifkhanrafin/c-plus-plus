#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    int mark;
    float cgpa;
    // Student akta data dype
    Student(int roll,
            int cls,
            int mark,
            float cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->mark = mark;
        this->cgpa = cgpa;
    }
};

// function er type hobe student er moto

Student radif_1()
{
    Student mahfuz(4005, 14, 1351, 5.99);
    return mahfuz;
};
// pointer type

// this return garbase value

// Student *radif_2()
// {
//     Student mahfuz(4005, 14, 1351, 5.99);
//     Student *pointer_of_mahfuz = &mahfuz;//address of mahfuz
//     return pointer_of_mahfuz;
// };
Student *radif_2()
{
    Student *mahfuz = new Student(4005, 14, 1351, 5.99);
    return mahfuz;
}
int main()
{
    // Student mahfuz(4005, 14, 1351, 5.00);

    // Student answer = radif();

    Student *answer = radif_2(); // when revive pointer

    // cout << mahfuz.roll << " " << mahfuz.cls << " " << mahfuz.mark << " " << mahfuz.cgpa << endl;
    // cout << answer.roll << " " << answer.cls << " " << answer.mark << " " << answer.cgpa << endl;
    cout << answer->roll << " " << answer->cls << " " << answer->mark << " " << answer->cgpa << endl; // for pointer output
    return 0;
}