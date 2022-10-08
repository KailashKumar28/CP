#include <bits/stdc++.h>
using namespace std;

/* int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin >> s;
        vector<int> repeated;

        sort(s.begin(),s.end());
        for(int i = 0; i< s.size();i++){
            int count = 1;
            int pre = 0;
            if(s[i]!= s[i+1]){
                count = count+ i-pre;
                repeated.push_back(count);
                pre = pre+i;
            }
        }

         for(int i = 0; i< s.size();i++){
            int count = 1;
            for(int j = i+1; j< s.size(); j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            repeated.push_back(count);
        }
       
        int sum = 0;
        for(int i = 0; i< repeated.size();i++){
            sum = sum + repeated[i];
        }
        int ans;
        ans = 2*(s.size()-sum) + 2*(repeated.size())+(sum-repeated.size());
        cout << ans << endl;

    }
} */
 

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        string s; 
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++){
            count+=2;
            for(int j = 0; j < i; j++){
                if (s[i] == s[j])
                {
                    count--;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}