#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        std::vector<int> boys;
        std::vector<int> girls;
        for(int i = 0; i < n; i++){
            int p;
            cin>> p;
            boys.push_back(p);
        }
        for(int i = 0; i < n; i++){
            int p;
            cin>> p;
            girls.push_back(p);
        }
        sort(boys.begin(), boys.end());
        sort(girls.begin(), girls.end());
        int ans;
        for (int i = 0; i < n; ++i){
            cout << boys[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; ++i){
            cout << girls[i] << " ";
        }
        cout << endl;
    } 
}