#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // step 1.is to print number row times
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "     ";
        }
        // step 2.is to print 2*(n-i)-1 spaces 
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << "      ";
        }
        // 3step .if i==n in that case we have to run a loop --> i-1 to 1, only in this case . which is when (i==n)
        // else you have run a loop form j=i to 1 print print j
        if (i == n)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                cout << j << "     ";
            }
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                cout << j << "     ";
            }
        }
        cout << endl;
    }
    return 0;
}
