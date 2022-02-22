//Check out my youtube channel: https://www.youtube.com/c/QuarantineEngineers
//Join me on discord to discuss: https://discord.com/invite/6kcmVQx8Fx
#include<bits/stdc++.h>
using namespace std;

#define int long long

//macro definition
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ld long double
#define endl "\n"
const int mod=998244353;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

const int bit=31;
//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    //MEX of length 1
    {
    int count[26]={0};
    for(int i=0;i<n;i++){
      count[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
      if(count[i]==0){
        cout<<(char)('a'+i)<<endl;
        return;
      }
    }
    }
 
    //MEX of length 2
    {
    set<string>st;
    for(int i=0;i<n-1;i++){
      string temp="";
      temp+=s[i];
      temp+=s[i+1];
      st.insert(temp);
    }
    for(int i=0;i<26;i++){
      for(int j=0;j<26;j++){
        string temp="";
        temp+=(char)('a'+i);
        temp+=(char)('a'+j);
        if(st.find(temp)==st.end()){
          cout<<temp<<endl;
          return;
        }
      }
    }
    }
 
    //MEX of length 3
    {
      set<string>st;
      for(int i=0;i<n-2;i++){
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        temp+=s[i+2];
        st.insert(temp);
      }
      
      for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
          //starting with 'a'
          {
          string temp="a";
          temp+=(char)('a'+i);
          temp+=(char)('a'+j);
          if(st.find(temp)==st.end()){
            cout<<temp<<endl;
            return;
          }
          }
        }
      }
    }
 
 
    // cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      cin>>t;
      //   t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}