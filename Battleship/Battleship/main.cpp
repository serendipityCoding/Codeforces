#include <iostream>
using namespace std;
char field[105][105];
int counter[105][105];
int main(){
    int n,k;
    while(cin>>n>>k){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>field[i][j];
                counter[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=(n-k);j++){
                bool isValid=true;
                for(int m=j;m<(j+k);m++){
                    if(field[i][m]=='.') continue;
                    else {
                        isValid=false;
                        break;
                    }
                }
                if(isValid==true){
                    for(int m=j;m<(j+k);m++){
                        counter[i][m]+=1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=(n-k);j++){
                bool isValid=true;
                for(int m=j;m<(j+k);m++){
                    if(field[m][i]=='.') continue;
                    else {
                        isValid=false;
                        break;
                    }
                }
                if(isValid==true){
                    for(int m=j;m<(j+k);m++){
                        counter[m][i]+=1;
                    }
                }
            }
        }
        int c=0,r=0,m=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(counter[i][j]>m){
                    r=i;
                    c=j;
                    m=counter[i][j];
                }
            }
        }
        cout<<(r+1)<<" "<<(c+1)<<endl;
    }
}
