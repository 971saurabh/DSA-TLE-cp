#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //1.step we have to print no in decreasing order
    for (int i = 1; i <= n; i++)
    {
        int no = n;
        for (int j = 1; j <= i; j++)
        {
            cout << no << " ";
            no--;
        }
        // then print spaces from 2*(n-i)
        for (int j = 0; j <= 2 * (n - i); j++)
        {
            cout << " "
                 << " ";
        }
        // 3.step print number in increasing order
        no = no + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << no << " ";
            no++;
        }
        cout << endl;
    }
    // step 3...print a loop 1st in decreasing order then increasing number
    for (int j = n; j >= 0; j--)
    {
        cout << j << " ";
    }
    for (int j = 1; j <= n; j++)
    {
        cout << j << " ";
    }
    cout << endl;
    // step 4....run a loop from n to 1  to print the mirror image of above pattern
    for (int i = n; i >= 1; i--)
    {
        int no = n;
        for (int j = 1; j <= i; j++)
        {
            cout << no << " ";
            no--;
        }
        for (int j = 0; j <= 2 * (n - i); j++)
        {
            cout << " "
                 << " ";
        }
        no = no + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << no << " ";
            no++;
        }
        cout << endl;
    }
    return 0;
}