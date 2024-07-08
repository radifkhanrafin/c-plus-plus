#include<bits/stdc++.h>
using namespace std;

class Student_data{
    public:
        string nm;
        char sec;
        int cls;
        int id;

        void input() {
        cin >> nm >> cls >> sec >> id;
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

    int k=0;

    while(k < n/2){
        char temp = s[k].sec;
        s[k].sec = s[n-k-1].sec;
        s[n-k-1].sec = temp;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<< s[i].nm << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " "<< endl;
    }
    
    return 0;
}