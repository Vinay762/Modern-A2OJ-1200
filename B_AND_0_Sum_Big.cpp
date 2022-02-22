#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll mod = 1e9+7;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        ll ans = 1;
        for(int i = 0; i<k; i++){
            ans = (ans*n)%mod;
        }
        cout<<ans<<"\n";
    }
    return 0;
}