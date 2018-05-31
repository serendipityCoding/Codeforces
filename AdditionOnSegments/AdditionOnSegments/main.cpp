#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,q;
struct query{
    int l,r,x;
    bool operator < (const query &rhs) const{
        return r<rhs.r;
    }
};
query queries[10002];
int dp[10002]={0};
int main(){
    cin>>n>>q;
    for(int i=0;i<q;i++){
        cin>>queries[i].l>>queries[i].r>>queries[i].x;
    }
    sort(queries,queries+q);
    for(int i=0;i<q;i++){
        int l=queries[i].l;
        int r=queries[i].r;
        int x=queries[i].x;
        /***
         Since the largest number is n;
         for the current query, the original value would be (n-x) to 1
         dp[j+x] --> the last index achieve j+x
         it is the larger one between the last index achieve j if the current query overlaps with it and the original dp[j+x]
         ***/
        for(int j=(n-x);j>0;j--){
            if(dp[j]>=l) dp[j+x]=max(dp[j],dp[j+x]);
        }
        dp[x]=r;
    }
    int res=0;
    for(int i=1;i<=n;i++){
        if(dp[i]>0) res+=1;
    }
    cout<<res<<endl;
    for(int i=1;i<=n;i++){
        if(dp[i]>0) cout<<i<<" ";
    }
    cout<<endl;
}
