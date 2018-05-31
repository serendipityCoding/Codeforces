#include <iostream>
#include <map>
using namespace std;
long long n,m;
long long a[100000][2];
long long b[100000][2];
int main(){
    cin>>n;
    map<long long, long long> s;
    long long a, x;
    for(int i=0;i<n;i++){
        cin>>a>>x;
        s.insert(pair<long long, long long>(a,x));
    }
    cin>>m;
    long long b, y;
    map<long long, long long>::iterator it;
    for(int i=0;i<m;i++){
        cin>>b>>y;
        it=s.find(b);
        if(it!=s.end()){
            if(it->second<y){
                s.erase(it);
                s.insert(pair<long long, long long>(b,y));
            }
        }
        else{
            s.insert(pair<long long, long long>(b,y));
        }
    }
    long long res=0;
    for( auto const& [key , val] : s ){
        res+=val;
    }
    cout<<res<<endl;
}
