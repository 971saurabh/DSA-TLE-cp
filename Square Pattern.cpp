#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // in this  we have to run a loop row upto n and column loop up to n 
    for (int i = 1; i <= n; i++)
    {
        // if the value of i>=j then you have to print i
        // else you have to print j 
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << i << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}