#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int cntodd = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            cntodd += a[i]%2;
        }
        if(cntodd < k || cntodd%2 != k%2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i = 0; i<n; i++){
            if(k == 1)break;
            if(a[i]%2 == 1){
                cout<<i+1<<" ";
                k--;
            }
        }
        cout<<n<<endl;
    }
}