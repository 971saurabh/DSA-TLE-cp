#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int n = (k + 1) / 2;
    // step 1: print star then spaces
    cout << "*";
    for (int spaces = 1; spaces <= n - 2; spaces++)
    {
        cout << " ";
    }
    // step 2. print star form 1 to n
    for (int star = 1; star <= n; star++)
    {
        cout << "*";
    }
    cout << endl;
    for (int row = 1; row <= n - 2; row++)
    {
        cout << "*";
        for (int spaces = 1; spaces <= n - 2; spaces++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        cout << "*";
    }
    cout << endl;
    for (int row = 1; row <= n - 2; row++)
    {
        for (int spaces = 1; spaces <= n - 1; spaces++)
        {
            cout << " ";
        }
        cout << "*";
        for (int spaces = 1; spaces <= n - 2; spaces++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int star = 1; star <= n; star++)
    {
        cout << "*";
    }
    for (int spaces = 1; spaces <= n - 2; spaces++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    return 0;
}
