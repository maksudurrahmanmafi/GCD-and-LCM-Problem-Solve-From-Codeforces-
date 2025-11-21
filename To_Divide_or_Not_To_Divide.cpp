#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (a % b == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        int ans = n - (n % a);
        if (n % a != 0)
            ans += a;
        if (ans % b == 0)
            ans += a;
        cout << ans << '\n';
    }
    return 0;
}
