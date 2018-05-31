#include <iostream>
#include <string>
using namespace std;
int main(){
    int no;
    cin>>no;
    int chairs[1000];
    getchar();
    string s;
    getline(cin,s);
    for(int i=0;i<no;i++){
        chairs[i]=s[i]-'0';
    }
    if(no==1){
        if(chairs[0]==1){
            cout<<"Yes"<<endl;
            return 0;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(no==2){
        if(chairs[0]==chairs[1]){
            cout<<"No"<<endl;
            return 0;
        }
        else{
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    if(chairs[0]==chairs[1]||chairs[no-1]==chairs[no-2]){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<no-1;i++){
        if(chairs[i]==1&&chairs[i+1]==1){
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=0;i<no-2;i++){
        if(chairs[i]==0&&chairs[i+1]==0&&chairs[i+2]==0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
