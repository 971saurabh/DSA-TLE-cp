#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 1.step is to run a loop from i= 6-->1
    for (int i = n; i >= 1; i--)
    {
        // then 2.step is to print n-i spaces
        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        // 3.step is to print star row time 
        // if i=6 print 6 then 5 and so on 
        for (int j = i; j >= 1; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}