#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int isPrime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r <= 3)
            cout << -1 << '\n';
        else if (l < r)
        {
            if (r % 2==0)
                cout << r / 2 << " " << r / 2 << '\n';
            else
            {
                r--;

                cout << r / 2 << " " << r / 2 << '\n';
            }
        }
        else
        {
            if (isPrime(l) == l)
                cout << -1 << '\n';
            else
                cout << isPrime(l) << " " << l - isPrime(l) << '\n';
        }
    }
    return 0;
}
