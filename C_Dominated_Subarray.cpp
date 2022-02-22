#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int n;
vector<int>a;

void solve() {
	int ans = n + 5;
	vector<int> lst(n + 1, -1);
	for(int i = 0; i < n; i++) {
		if(lst[a[i]] != -1)
			ans = min(ans, i - lst[a[i]] + 1);
		lst[a[i]] = i;
	}
	if(ans > n)
		ans = -1;
	cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        cin>>n;
        a.resize(n,0);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        solve();
    }
    return 0;
}