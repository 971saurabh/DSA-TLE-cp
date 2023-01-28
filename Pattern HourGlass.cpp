#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n + 1; row++)
    {
        // 1. print row-1 spaces
        // since in first row there is no space .
        for (int i = 0; i < row - 1; i++)
        {
            cout << " ";
        }
        // 2.step is we have to print number in decreasing order from 5-->0 (5,4,3,2,1,0)
        for (int i = n - row + 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        // 3.step we have to print number in increasing order which is 1-->5(1,2,3,4,5)
        for (int i = 1; i <= n - row + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // now we just have to take the mirror inverse of the obove code
    for (int row = n; row >= 1; row--)
    {
        // 1. print row-1 spaces
        // since in first row there is no space .
        for (int i = 0; i < row - 1; i++)
        {
            cout << " ";
        }
        // 2.step is we have to print number in decreasing order from 5-->0 (5,4,3,2,1,0)
        for (int i = n - row + 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        // 3.step we have to print number in increasing order which is 1-->5(1,2,3,4,5)
        for (int i = 1; i <= n - row + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}