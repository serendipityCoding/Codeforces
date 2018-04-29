#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long k,n,s,p;
    while(cin>>k>>n>>s>>p){
        if(n<=s){
            cout<<ceil((double)k/(double)p)<<endl;
        }
        else{
            long long sheetPerPerson=ceil((double)n/(double)s);
            long long sheet=sheetPerPerson*k;
            cout<<(long long)ceil((double)sheet/(double)p)<<endl;
        }
    }
}
