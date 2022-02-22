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
        string s;
        cin>>s;
        ll zero = 0;
        for(char ch : s)zero = ch == '0' ? zero+1 : zero;
        if(zero%2 == 1 && zero >= 3)cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}
