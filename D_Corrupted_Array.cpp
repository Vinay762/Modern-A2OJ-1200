#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        vector<ll>b(n+2);
        for(int i = 0; i<n+2; i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        ll sum1 = 0;
        for(int i = 0; i<n; i++)sum1 += b[i];
        ll sum2 = sum1-b[0]+b[n];
        if(sum2 == b[n+1]){
            for(int i = 1; i<n+1; i++){
                cout<<b[i]<<' ';
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}