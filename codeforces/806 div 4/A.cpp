#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string ans = "YES";
    string A[8]= {"YES", "YEs", "YeS","yES", "Yes", "yEs", "yeS","yes"     };
    while(t--){
        string s;
        cin >> s;
        for(int i =0; i< 8; i++){
            if(s==A[i]){
                ans = "YES";
                break;
            }
            else{
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
}