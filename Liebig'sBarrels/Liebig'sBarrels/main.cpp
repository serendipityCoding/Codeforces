#include <iostream>
#include <algorithm>
using namespace std;
#define F first
#define S second
#define ll long long
#define clr(x) memset((x),0,sizeof(x))

const int MX = 1e5 + 10, MD = 1e9 + 7;
ll n, m, a[MX], ans, tmp, l, k, mx, ind;
int main(){
    ios::sync_with_stdio(0) ; cin.tie(0) ;
    cin >> n >> k >> l;
    m = n * k;
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a + m);
    mx = int(upper_bound(a, a + m, a[0] + l) - a);
    if(mx < n){
        cout << 0;
        return 0;
    }
    cout<<mx<<endl;
    for(int i = 0; i < n; i++){
        ans += a[ind];
        ind++;
        for(int j = 0; j < k - 1; j++){
            if(mx - ind > n - i - 1){
                ind++;
            }
            else{
                break;
            }
        }
    }
    cout << ans;
    
}
