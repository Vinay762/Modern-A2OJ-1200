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
        vector<ll>a(n);
        for(int i = 0; i<n; i++)cin>>a[i];
        sort(a.begin(), a.end());
        int mini = INT_MAX;
        ll idx;
        for(int i = 1; i<n; i++){
            if(a[i]-a[i-1] < mini){
                idx = i;
                mini = a[i]-a[i-1];
            }
        }
        cout<<a[idx-1]<<' ';
        for(int i = idx+1; i<n; i++)cout<<a[i]<<' ';
        for(int i = 0; i<idx-1; i++)cout<<a[i]<<' ';
        cout<<a[idx]<<endl;
    }
    return 0;
}