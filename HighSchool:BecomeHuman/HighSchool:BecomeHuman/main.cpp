#include <iostream>
#include <cmath>
using namespace std;
long long x,y;
int comp(){
    if(x<=2&&y<=2){
        if(x>y) return -1;
        else return 0;
    }
    if(x>2&&y>2){
        if(x>y) return -1;
        else return 1;
    }
    else{
        if(x<=2&&y>2){
            if(x==1) return -1;
            else{
                if(x==2&&y==3) return -1;
                else if(x==2&&y==4)  return 0;
                else return 1;
            }
        }
        else{
            if(y==1) return 1;
            else{
                if(y==2&&x==3) return 1;
                else if(y==2&&x==4)  return 0;
                else return -1;
            }
        }
    }
}
int main(){
    cin>>x>>y;
    if(x==y){
        cout<<"="<<endl;
        return 0;
    }
    int res=comp();
    if(res==1) cout<<">"<<endl;
    else if(res==-1) cout<<"<"<<endl;
    else cout<<"="<<endl;
}
