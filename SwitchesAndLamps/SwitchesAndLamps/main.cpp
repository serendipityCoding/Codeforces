#include <iostream>
#include <string>
using namespace std;
int switchNo, lampNo;
int board[2000][2000];
int flag[2000];
int main(){
    cin>>switchNo>>lampNo;
    string s;
    getchar();
    for(int i=0;i<switchNo;i++){
        getline(cin,s);
        for(int j=0;j<lampNo;j++){
            board[i][j]=s[j]-'0';
        }
    }
    for(int i=0;i<lampNo;i++){
        int count=0;
        for(int j=0;j<switchNo;j++){
            if(board[j][i]==1) count+=1;
        }
        if(count==1){
            for(int j=0;j<switchNo;j++){
                if(board[j][i]==1) flag[j]=1;
            }
        }
    }
    for(int i=0;i<switchNo;i++){
        if(flag[i]==0) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
