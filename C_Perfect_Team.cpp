#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while(t-->0){
        ll c,m,x;
        cin>>c>>m>>x;
        ll ans = min(c,m);
        ans = min(ans, (c+m+x)/3);
        cout<<ans<<endl;
    }
    return 0;
}