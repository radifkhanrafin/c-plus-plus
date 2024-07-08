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

        void input() {
            cin >> nm >> cls >> sec >> id >> math >> eng;
        }
};

bool cmp(Student_data a, Student_data b){
    if(a.eng > b.eng) return true;
    else if(a.eng < b.eng) return false;
    else {
        if(a.math > b.math) return true;
        else if(a.math < b.math) return false;
        else{
            if(a.id < b.id) return true;
            else return false;
        }
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
    
    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++)
    {
         cout<< s[i].nm << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math << " " << s[i].eng << " "<< endl;
    }
    
    
    return 0;
}