#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for(ll i = 0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll>diff;
    for(int i = 1; i<n; i++){
        if(a[i]-a[i-1]>x)diff.push_back(a[i]-a[i-1]);
    }
    ll m = diff.size();
    sort(diff.begin(),diff.end());
    ll i = 0;
    while(i < m){
        if((diff[i]-1)/x <= k){
            k -= (diff[i]-1)/x;
            i++;
        }else{
            break;
        }
    }
    cout<<m-i+1<<endl;
    return 0;
}