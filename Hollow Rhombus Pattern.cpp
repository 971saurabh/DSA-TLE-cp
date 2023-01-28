#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //step 1. run a loop from 1 to n
    //then run a loop upto n-i for spaces
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // we have to consider two cases
        //1.case is when i==1 || i==n then we have to print star
       // 2.case when j==1 || j==n  then we have to print star
       // 3.else print spaces
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
