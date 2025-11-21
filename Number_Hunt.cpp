#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int findPrime(int s)
{
    int first = 0, second = 0;
    while (first == 0 || second == 0)
    {
        if (isPrime(s))
        {
            if (first == 0)
                first = s;
            else
                second = s;
        }
        s++;
    }
    return first * second;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 1)
            n = 2;
        cout << findPrime(n) << '\n';
    }
    return 0;
}
