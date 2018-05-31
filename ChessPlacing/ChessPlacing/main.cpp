#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int chess[100];
int main(){
    cin>>n;
     for(int i=0;i<(n/2);i++){
        cin>>chess[i];
    }
    sort(chess,chess+(n/2));
    int c=0;
    int moveToBlack=0;
    for(int i=1;i<=n;i+=2){
        moveToBlack+=abs(chess[c++]-i);
    }
    c=0;
    int moveToWhite=0;
    for(int i=2;i<=n;i+=2){
        moveToWhite+=abs(chess[c++]-i);
    }
    if(moveToWhite<moveToBlack) cout<<moveToWhite<<endl;
    else cout<<moveToBlack<<endl;
}
