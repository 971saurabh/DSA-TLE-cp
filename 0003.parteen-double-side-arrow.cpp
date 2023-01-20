#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = (n + 1) / 2;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= 2 * (k - i); j++)
        {
            cout << " "
                 << " ";
        }
        // 1.step print number in decreasing order and i times
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        // 2.we have to print the spaces . in first row no space is there
        // in second row there is only one space
        for (int j = 1; j <= 2 * i - 3; j++)
        {
            cout << " "
                 << " ";
        }
        // 3.step we have to print the number in increasing order
        for (int j = 1; j <= i; j++)
        {
            // we have to take care of this case case only because in first row there is only one element
            if (i == 1)
            {
                break;
            }
            cout << j << " ";
        }
        cout << endl;
    }
    // now just run a loop in decreasing order form k-1 to 1. rest is same(copy of above code)
    for (int i = k - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * (k - i); j++)
        {
            cout << " "
                 << " ";
        }
        // 1.step print number in increasing order
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * i - 3; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                break;
            }
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}