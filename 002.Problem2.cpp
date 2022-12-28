// https://www.hackerrank.com/challenges/summing-the-n-series/problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mod = 1000000000 + 7;
        cout << ((n % mod) * (n % mod)) % mod << endl;
    }
    return 0;
}
