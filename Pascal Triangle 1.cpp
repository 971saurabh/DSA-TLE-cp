#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int n;
    cin >> n;
    // pascal triangle is the sum of above two number
    // ex............. 1............
    //.............  1   1.........
    //..............1  2  1...........
    // and so on
    for (i = 0; i < n; i++)
    {
        int num = 1;
        for (j = 0; j < n - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (k = 0; k <= i; k++)
        {
            cout << num << "   ";
            num = num * (i - k) / (k + 1);
        }
        cout << endl;
    }
    return 0;
}