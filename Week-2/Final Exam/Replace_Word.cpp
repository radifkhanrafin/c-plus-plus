#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++){
        string s, p;
        cin >> s >> p;
        
        while (s.find(p) != -1) {
            s.replace(s.find(p), p.size(), "#");
        }

        cout << s << endl;
    }
    
    return 0;
}