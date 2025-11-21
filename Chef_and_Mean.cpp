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
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0, avg1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
        {
            cout << "Impossible\n";
            continue;
        }
        avg1 = sum / n;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            //  avg2 =(sum -v[i])/(n-1);
            if (v[i] == avg1)
            {
                cout << i + 1 << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "Impossible\n";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    long long n;
// 	    cin>>n;
// 	    double a[n],sum=0,f=0,avg1,avg2;
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	        sum+=a[i];
// 	    }
// 	    avg1=sum/n;
//         for(int i=0;i<n;i++){
//             avg2=(sum-a[i])/(n-1);
//            // cout<<avg1<<" "<<avg2;
//             if(avg1==avg2){
//                 cout<<i+1<<endl;
//                 f=1;
//                 break;
//             }
//         }
// 	    if(f!=1)
// 	        cout<<"Impossible"<<endl;
// 	}

// }