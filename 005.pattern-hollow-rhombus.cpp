#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // 1.step is to print the n-i spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // 2.step is to print star when i==1 || j==1 ,i==n, j==n
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else if (j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
