#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int idx=-1,t;
	    for(int i=0;i<n;i++){
	      cin>> t;
	      if(idx==-1 && t==1)
	        idx=i;
	    }
	    for(int i=0;i<n;i++){
	        if(i==idx)
	          cout<<(n+1)<<" ";
	        cout << (i+1)<<" ";
	    }  
	    if(idx==-1)
	      cout<<(n+1);
	    cout<<"\n";
	}
	return 0;
}