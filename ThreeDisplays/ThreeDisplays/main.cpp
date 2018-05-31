#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
using namespace std;
long long font[3000];
long long cost[3000];
long long dp[3000];
int main(){
    int no;
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>font[i];
    }
    for(int i=0;i<no;i++){
        cin>>cost[i];
    }
    for(int i=0;i<no;i++) dp[i]=INT_MAX;
    for(int i=0;i<no;i++){
        for(int j=0;j<i;j++){
            if(font[j]<font[i]){
                dp[i]=min(dp[i],cost[j]+cost[i]);
            }
        }
    }
    long long res=INT_MAX;
    for(int i=0;i<no;i++){
        for(int j=0;j<i;j++){
            if(font[j]<font[i]){
                res=min(res,dp[j]+cost[i]);
            }
        }
    }
    if(res==INT_MAX) cout<<-1<<endl;
    else cout<<res<<endl;
}
