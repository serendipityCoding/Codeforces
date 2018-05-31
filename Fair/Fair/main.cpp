#include <iostream>
#include <vector>
#include <set>
#include <limits.h>
#include <queue>
using namespace std;
int n,m,k,s;
int good[100000];
vector<int> adj[100000];
int dist[100000][100000];
void bfs(int s0){
    queue<int> q;
    q.push(s0);
    dist[s0][s0]=0;
    while(!q.empty()){
        int n=q.front();
        q.pop();
        for(int i=0;i<adj[n].size();i++){
            if(dist[s0][adj[n][i]]>dist[s0][n]+1){
                q.push(adj[n][i]);
                dist[s0][adj[n][i]]=dist[s0][n]+1;
            }
        }
    }
}
int main(){
    cin>>n>>m>>k>>s;
    for(int i=0;i<n;i++){
        cin>>good[i];
    }
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(dist,0,sizeof(dist));
    for(int i=0;i<n;i++){
        bfs(i);
    }
    int temp[100000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j]=dist[i][j];
        }
        sort(temp,temp+n);
        int res=0;
        set<int> gds;
        gds.insert(good[i]);
        for(int j=0;j<n;j++){
            if(gds.find(good[)
        }
    }
}
