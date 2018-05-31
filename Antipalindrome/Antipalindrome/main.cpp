#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string s){
    int n = s.size();
    for (int i=0;i<n/2;i++)
        if(s.at(i)!=s.at(n-i-1))
            return false;
    return true;
}
int maxAntiPalindrome(string s){
    int n=s.size();
    char c=s.at(0);
    int i =1;
    for (i=1; i<n; i++)
        if (s.at(i)!=c)
            break;
    if (i== n)
        return 0;
    if (checkPalindrome(s))
        return n-1;
    return n;
}
int main(){
    string s;
    getline(cin,s);
    if(checkPalindrome(s)==false){
        cout<<s.length()<<endl;
    }
    else{
        cout<<maxAntiPalindrome(s)<<endl;
    }
}
