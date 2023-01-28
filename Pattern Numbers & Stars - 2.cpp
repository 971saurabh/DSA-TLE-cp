#include <iostream>
using namespace std;
int main()
{
    // enter the value of n
    int n;
    cin >> n;
    // run a loop 1--->n
    // then run a loop row times
    for (int i = 1; i <= n; i++)
    {
        // in every row print j
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // then print n-i star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}