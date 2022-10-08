#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        string ans = "YES";
        vector<int> arr;
        for (int i = 0; i< 2*n;i++){
            int k;
            cin>> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end());
        vector<int> frontrow;
        vector<int> backrow;
        for(int i = 0; i< n;i++){
            frontrow.push_back(arr[i]);
            backrow.push_back(arr[i+n]);
        }
        for(int i = 0; i< n; i++){
            if((backrow[i]-frontrow[i])<x){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}