#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long mygcd(long long a, long long b)
{
    return b == 0 ? a : mygcd(b, a % b);
}
ll solve(ll a, ll b)
{
    return a - mygcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        auto result = solve(a, b);
        cout << result << '\n';
    }
    return 0;
}
