// https://www.hackerrank.com/challenges/number-groups/problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // 1.that we have to do in this problem is we have to find out the sum of odd number present in a group of odd number
    //  ex if n=1(group number) so 1st odd number we know is 1 . 2nd ex n=2 (3,5) are two odd number and there sum is 8 so we have to print sum of them
    //  so the approach we follow is

    // 1.calculate the number of (n-1) term to get the number of terms.
    //  calculate by (n)*(n-1)/2 + 1
    // 2.step is when we know that we have this much number of term then we have to find the stating term of that group and we can calculate by 2*(num_of_term) - (1) which is a odd number
    ll n;
    cin >> n;
    ll indx = ((n) * (n - 1)) / 2 + 1;
    ll starting_number_of_that_group = 2 * indx - 1;
    ll ans = 0;
    while (n--)
    {
        ans += starting_number_of_that_group;
        starting_number_of_that_group += 2; // to get the next odd number
    }
    cout << ans << endl;
    return 0;
}