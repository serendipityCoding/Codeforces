#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    map<string,string> gems;
    gems.insert(pair<string,string>("purple","Power"));
    gems.insert(pair<string,string>("green","Time"));
    gems.insert(pair<string,string>("blue","Space"));
    gems.insert(pair<string,string>("orange","Soul"));
    gems.insert(pair<string,string>("red","Reality"));
    gems.insert(pair<string,string>("yellow","Mind"));
    
    int m;
    cin>>m;
    getchar();
    string s;
    for(int i=0;i<m;i++){
        getline(cin,s);
        gems.erase(s);
    }
    cout<<gems.size()<<endl;
    map<string,string>:: iterator it;
    for ( it = gems.begin(); it != gems.end(); it++ ){
        cout<<it->second<<endl;
    }
}
