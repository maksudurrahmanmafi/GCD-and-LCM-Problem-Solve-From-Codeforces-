#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,x,y;
     cin>>n>>x>>y;
     ll horizontal = 2*(n-1);
     ll diagonal =0;
     diagonal+=min(x-1,y-1);
     diagonal +=min(x-1,n-y);
     diagonal+=min(n-x,y-1);
     diagonal+=min(n-x,n-y);
     cout<<horizontal+diagonal<<'\n';
    }
    return 0;
}
