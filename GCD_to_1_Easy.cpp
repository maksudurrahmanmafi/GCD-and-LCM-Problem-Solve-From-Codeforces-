#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++){
            cout<<i+j<<" ";
        }
        cout<<'\n';
     }
    }
    return 0;
}
