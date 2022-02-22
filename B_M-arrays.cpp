#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll n,m,ans = 0;
        cin>>n>>m;
        vector<ll>a(n);
        vector<ll>b(m);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            a[i] = a[i]%m;
            b[a[i]]++;
        }
        if(b[0])ans++;
        for(ll i = 1; i<m; i++){
            if(b[i]){
                if(abs(b[i]-b[m-i]) <= 1)ans++;
                else ans += abs(b[i]-b[m-i]);
                b[m-i] = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}