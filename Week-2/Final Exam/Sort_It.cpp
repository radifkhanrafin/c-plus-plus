#include<bits/stdc++.h>
using namespace std;

class Student_data{
    public:
        string nm;
        char sec;
        int cls;
        int id;
        int math;
        int eng;
        int total;

        void input() {
            cin >> nm >> cls >> sec >> id >> math >> eng;
            total = math + eng;
        }
};

bool compare(Student_data a, Student_data b){
    if(a.total > b.total) return true;
    else if(a.total < b.total) return false;
    else {
        if(a.id < b.id) return true;
        else return false;
    }
};

int main(){
    int n;
    cin >> n;
    Student_data s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    sort(s, s+n, compare);

    for (int i = 0; i < n; i++)
    {
         cout<< s[i].nm << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math << " " << s[i].eng << " "<< endl;
    }
    
    
    return 0;
}