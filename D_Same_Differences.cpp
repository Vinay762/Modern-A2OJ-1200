#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    unordered_map<ll,ll>mp;
    while(t-->0){
        mp.clear();
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i = 0; i<n; i++)cin>>a[i];
        for(int i = 0; i<n; i++){
            mp[a[i]-i]++;
        }
        ll ans = 0;
        for(auto key : mp){
            ll x = key.second;
            ans += (x)*(x-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}