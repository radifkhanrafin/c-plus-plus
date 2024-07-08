#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    // cout<<n;
    student data[n];
    for (int i = 0; i < n; i++)
    {
        // cout<<"loop- "<<i<<endl;
        cin >> data[i].name >> data[i].roll >> data[i].mark;
    }

    // just for mark

    // int mini = INT_MAX;
    // int maxi=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << data[i].name << " " << data[i].roll << " " << data[i].mark << endl;

    //     if (data[i].mark < mini)
    //     {
    //         mini = data[i].mark;
    //     }
    //     if (data[i].mark>maxi)
    //     {
    //       maxi=data[i].mark;
    //     }

    // }

    student mini;
    mini.mark = INT_MAX;
    student maxi;
    maxi.mark = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (data[i].mark < mini.mark)
        {
            mini = data[i];
        }
        if (data[i].mark>maxi.mark)
        {
            maxi=data[i];
        }
        
    }

    cout << "Minimum Mark Object " << mini.name << " " << mini.roll << " " << mini.mark << endl;
    cout << "Maximum Mark Object " << maxi.name << " " << maxi.roll << " " << maxi.mark << endl;
    // cout << " Mark " << maxi;
    return 0;
}