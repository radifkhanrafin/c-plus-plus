#include <iostream>
#include <stdio.h>
using namespace std;

// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) != EOF)
//     {
//         printf("%d %d\n", a, b);
//     }

//     return 0;
// }
int main()
{
    int a, b;
    while (cin >>a>>b)
    {
       cout<<a<<" "<<b <<endl;
    }

    return 0;
}