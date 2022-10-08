#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        vector<int> A;
        vector<vector<int>> ans;
        for (int i = 0; i<N; i++){
            int a;
            cin >> a;
            A.push_back(a);
        }
        for (int i = 0; i< N-1; i++){
            for (int j = i+1; j < N; j++){
                vector<int> temp;
                if(min(A[i],A[j])<=(A[i]^A[j])){
                    temp.push_back(A[i]);
                    temp.push_back(A[j]);
                    ans.push_back(temp);
                }
            }
        }
        cout << ans.size() << endl;
        
    }
}