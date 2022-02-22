#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        vector<pair<ll,ll>>b(n+1);
        for(int i = 1; i<=n; i++){
            ll a;
            cin>>a;
            b[i] = {a,i};
        }
        ll res = 0;
        sort(b.begin(), b.end());
        for(ll i = 1; i<=n; i++){
            for(ll j = i+1; j<=n; j++){
                ll l = b[i].second + b[j].second;
                ll r = b[i].first * b[j].first;

                if(l == r)res++;
                if(r > 2*n)break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}