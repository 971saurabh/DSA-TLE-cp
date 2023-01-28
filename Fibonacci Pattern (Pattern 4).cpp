#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // fibonacci pattern 0,1,1,2,3,5,8,13......
    // it is the sum of previous two term  which is
    // a=-1,b=1 c=a+b
    int a = -1;
    int b = 1;
    int c = a + b;
    // in every row we have to print number row times
    for (int i = 1; i <= n; i++)
    {
        // and in every row we have to print c
        // and update value by a=b,b=c,c=a+b
        for (int j = 1; j <= i; j++)
        {
            cout << c << '\t';
            a = b;
            b = c;
            c = a + b;
        }
        cout << endl;
    }
    return 0;
}