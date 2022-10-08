#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

// int indexOfMax(std::vector<ll> V){
//     std::vector<ll> v;
//     int n = V.size();
//     for (int i = 1; i < n; i++){
//         v.push_back(V[i]);
//     }
//     if (v.size() == 0) {
//         return -1;
//     }

//     ll max = v[0];
//     int maxIndex = 0;

//     for (int i = 1; i < v.size(); i++) {
//         if (v[i] >= max) {
//             maxIndex = i;
//             max = v[i];
//         }
//     }

//     return maxIndex;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string ans = "YES";
//         std::vector<ll> data;
//         for (int i = 0; i < n; i++)
//         {
//             int p;
//             cin >> p;
//             data.push_back(p);
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << data[i] << " ";
//         // }
//         // cout<< endl;


//         // for (int i = 1; i < n; i++){
//         //     datanew.push_back(data[i]);
//         // }
//         // for (int i = 0; i < n-1; i++)
//         // {
//         //     cout << datanew[i] << " ";
//         // }


//         int maxindex = indexOfMax(data)+1;
//         //cout << maxindex << endl;


//         while(data[maxindex-1]>0 && data[maxindex]>0){
//             data[maxindex] -= data[maxindex-1];
//             maxindex = indexOfMax(data)+1;
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << data[i] << " ";
//         // }
//         // cout << endl;

//         if (data[maxindex] ==0){
//             ans = "YES";
//         }
//         else{
//             ans = "NO";
//         }
//         cout << ans << endl;

//     }
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "YES";
        std::vector<int> A;
        for (int i = 0; i < n; ++i){
            int k;
            cin >> k;
            A.push_back(k);
        }
        if(n==1 || A[0] == 1){
            ans = "YES";
        }
        for (int i = 0; i < n; ++i){
            if (A[i]%A[0]!=0)
            {
                ans = "NO";
                break;
            }
        }
        cout<< ans << endl;
    }
}