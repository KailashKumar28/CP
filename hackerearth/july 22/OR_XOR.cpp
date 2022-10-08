#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<ll> A;
        ll ans = 0;
        int count = 0;
        for(int i = 0; i< N; i++){
            ll a;
            cin >> a;
            A.push_back(a);
        }
        for(int i = 0; i < N; i++){
            ans = ans|(A[i]);
        }
        for(int i = 0; i<= ans; i++ ){
            if((i|ans)<= ans){
                count++;
            }
        }
        cout << count << endl;
    }
}