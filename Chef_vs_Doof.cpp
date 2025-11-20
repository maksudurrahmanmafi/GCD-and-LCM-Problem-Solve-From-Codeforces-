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
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0) flag=true;
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}
