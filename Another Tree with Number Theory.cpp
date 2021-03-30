#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'

int sub=0;

void dfs(int v, int w, vector<vector<int>>& adj) {
    int sz=adj[v].size();
    if(sz==0){
        sub+=w;
        return;
    }
    if(w%sz==0){
        for (int u : adj[v]) {
            dfs(u, w/sz, adj);
        }
    }
}

int main() {
    fast
	int n;
	cin>>n;
    vector<vector<int>> adj(n+1);
    //int p[n-1+1];
    int p;
    for(int i=1; i<=n-1; i++){
        //cin>>p[i];
        cin>>p;
        adj[p].push_back(i+1);
    }
    int q;
    cin>>q;
	while(q--){
	    int v,w;
        cin>>v>>w;
        sub=0;
        dfs(v,w,adj);
        cout<<w-sub<<endl;
	}
	return 0;
}
