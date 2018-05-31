#include <iostream>
#include <string>
#include <climits>
#include <cstring>
using namespace std;
long long width[200000];
bool occupy[200000][2];
int rowNo;
int findSmallestNoOccupied(){
    long long m=LLONG_MAX;
    int res=-1;
    for(int i=0;i<rowNo;i++){
        if(occupy[i][0]==false&&occupy[i][1]==false){
            if(width[i]<m){
                m=width[i];
                res=i;
            }
        }
    }
    occupy[res][0]=true;
    return res+1;
}
int findLargestOccupied(){
    long long m=0;
    int res=-1;
    for(int i=0;i<rowNo;i++){
        if(occupy[i][0]==true&&occupy[i][1]==false){
            if(width[i]>m){
                m=width[i];
                res=i;
            }
        }
    }
    occupy[res][1]=true;
    return res+1;
}
int main(){
    cin>>rowNo;
    for(int i=0;i<rowNo;i++){
        cin>>width[i];
    }
    memset(occupy,false,sizeof(occupy));
    getchar();
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            cout<<findSmallestNoOccupied()<<" ";
        }
        else{
            cout<<findLargestOccupied()<<" ";
        }
    }
    cout<<endl;
}
