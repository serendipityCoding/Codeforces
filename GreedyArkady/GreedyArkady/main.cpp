#include <iostream>
using namespace std;
int main(){
    long long n,k,m,d;
    while(cin>>n>>k>>m>>d){
        long long max=0;
        for(long long c=m;c>0;c--){
            long long first=0;
            long long t=d;
            long long times=n/(k*c);
            long long remain=n-t*k*c;
            if(remain<0||remain==n) first=c;
            else if (remain>=c&&(d-times)>0) first+=c;
            if(max<first) max=first;
        }
        cout<<max<<endl;
    }
}
