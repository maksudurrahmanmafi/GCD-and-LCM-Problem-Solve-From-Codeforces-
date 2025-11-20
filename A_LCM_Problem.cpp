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
        int a, b;
        cin >> a >> b;
        if (2 * a <= b)
            cout << a << " " << a * 2 << '\n';
        else
            cout << -1 << " " << -1 << '\n';
    }
    return 0;
}
