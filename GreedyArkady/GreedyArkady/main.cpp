#include <iostream>
using namespace std;
int main(){
    long long n,k,m,d;
    long long first=0;
    while(cin>>n>>k>>m>>d){
        long long max=0;
        long long total=n;
        for(long long c=1;c<=m;c++){
            long long first=0;
            bool isEnd=false;
            for(long long i=0;i<d;i++){
                for(long long j=0;j<k;j++){
                    if(n>=c){
                        if(j==0) first+=c;
                        n-=c;
                    }
                    else{
                        isEnd=true;
                        break;
                    }
                }
                if(isEnd==true) break;
            }
            if(first>max) max=first;
            n=total;
        }
        cout<<max<<endl;
    }
}
