#include <iostream>
using namespace std;
int main()
{
    // step 1 enter the value of n
    int n;
    cin >> n;
    // k is used for print the star ex- in second row we have 1star so .for tha we used formula = 2*k-1
    int k = 1;
    for (int i = n; i >= 1; i--)
    {
        // step 2.print number row times
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // one edge case is there which is in 1st row you dont't have to print star
        if (i < n)
        {
            for (int j = 1; j <= 2 * k - 1; j++)
            {
                cout << "*"
                     << " ";
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}