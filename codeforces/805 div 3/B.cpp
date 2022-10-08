#include <bits/stdc++.h>
using namespace std;

/* int countdistinctchar(string s){
    unordered_set<char> m;
    for (int i=0; i< s.length(); i++){
        m.insert(s[i]);
    }
    return m.size();
} */

int threeletter(string s){
    int count = 0;
    int i = 0;
    while(i<(s.size()-1)){
        for (int j= i+1; j<s.size(); j++)
    }
    for (int i =0 ; i< s.size(); i++){

    }
}

int main(){
    int t;
    cin >> t;
    int temp = t;
    vector<int> ans;
    while(t--){
        string s;
        cin >> s;
        ans.push_back(countdistinctchar(s));
    }
    for (int i = 0; i <temp; i++){
        if(ans[i]%3 == 0){
            cout << ans[i]/3 << endl;
        }
        else{
            cout<< (ans[i]/3)+1 << endl;
        }
    }
}