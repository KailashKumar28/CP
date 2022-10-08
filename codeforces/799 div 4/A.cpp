#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int ans;
        int n = 4;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>=b && a>=c && a>=d){
            ans = 0;
        }
        else if((b>a && a>= c && a>=d)||(c>a && a>= b && a>=d)||(d>a && a>= c && a>=b)){
            ans = 1;
        }
        else if(a<b && a< c && a< d){
            ans = 3;
        }
        else{
            ans = 2;
        }
        cout << ans << endl;
    }
}