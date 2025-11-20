#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x = n/k;
        int ans = x;
        for(int i = 1;i<=k;i++){
            cout<<ans<<" ";
            ans = ans+x;
        }
        cout<<endl;
    }
    return 0;
}