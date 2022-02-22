#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int arr[1000][2];
int visited[1000];
int n;

void dfs(int point){
    visited[point] = 1;
    for(int i = 0; i<n; i++){
        if((arr[i][0] == arr[point][0] || arr[i][1] == arr[point][1]) && visited[i] == -1){
            dfs(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i = 0; i<n; i++)
        visited[i] = -1;
    
    int ans = -1;
    for(int i = 0; i<n; i++){
        if(visited[i] == -1){
            dfs(i);
            ans++;
        }
    }
    cout<<ans;
    return 0;
}