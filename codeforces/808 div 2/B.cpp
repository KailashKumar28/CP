#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, r;
        cin >> n >> l >> r;
        string ans = "YES";
        if((r-l+1)<n){
            ans = "NO";
        }
        else{
            ans = "YES";
        }
        cout << ans << endl;
    }
}