#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // run over the entire row
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // if the row is odd and it is 2 row then also print 1
            if (i % 2 == 1 || i == 2)
            {
                cout << "1";
            }
            // if the column is 1st ans j==i then also print 1
            else if (j == 1 || j == i)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}