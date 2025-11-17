#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1;
    }
    else if(n%2==0 || isPrime(n-2)){
        cout<<2;
    }
    else cout<<3;
    return 0;
}
