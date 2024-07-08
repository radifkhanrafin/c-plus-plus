#include <iostream>
using namespace std;

class person
{

public:
    int age;
    string name;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    person *rakib = new person("rakib hossen", 20);
    person *sakib = new person("sakib hossen", 25);
    // rakib = sakib;
    // delete sakib; delete korar jonno data passe na
    *rakib = *sakib;
    cout << rakib->name << " " << rakib->age << endl;
    cout << sakib->name << " " << sakib->age;
    return 0;
}