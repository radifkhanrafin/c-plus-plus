#include <iostream>

using namespace std;
int main()
{
    char s[100];
    int n;
    cin >> n;

    // cin >> s; যখন একটি মাত্র শব্দ ইনপুট নেয়া  হবে
    // fgets(s, 100, stdin); এটি ব্যবহার করা হচ্ছে প্রোগ্রামের ক্ষেত্রে স্পেস সহ ইনপুট নেওয়ার জন্য কিন্তু ইন্টার বাটন কাজ করবে না
    getchar();
    cin.getline(s, 100);
    cout << s <<endl <<n;
}