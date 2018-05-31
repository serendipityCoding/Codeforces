#include <iostream>
#include <cstring>
typedef long long ll;
using namespace std;

const int MAXN = 70;
int n,k;
long long a[MAXN];
long long s[MAXN];
long long dp[MAXN][MAXN];

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i]; //s[i]: the sum of the first i books' price
    }
    
    long long res = 0;
    for(int bit=60;bit>=0;bit--){ //bit: from the most significant bit to the least significant bit
        long long cnt=1ll<<bit;
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for(int i=1;i<=k;i++){//split to 1-k bookshelves
            for(int j=1;j<= n;j++){//when the total number of books is 1-n
                for(int m=0;m<j;m++){//when the total number of books is 0-(j-1)
                    if (dp[i - 1][m]&&((s[j] - s[m])&cnt)){
                        /****
                         for the current bit
                         dp[i-1][m] -->
                         s[j]-s[m] --> the sum of book (m+1) to j, see if it can make the current bit to be 1
                         
                         ****/
                        dp[i][j]=1;
                    }
                }
            }
        }
        if(dp[k][n]){
            res+=cnt;
        }
    }
    cout<<res<<endl;
    return 0;
}
