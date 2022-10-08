#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }
   
    sort(arr, arr+N);
    /* for (int i =0;i<N;i++){
        cout<< arr[i];
    } */

    vector<int> ans;
    int i =0;
    while(i<N){
        int count = 1;
        for(int j= i+1; j<N; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
        ans.push_back(count);
        i = i + count;
        } 
    }
    int sizenew = ans.size();
    sort(ans.begin(), ans.end());
    for(int i = 0; i<sizenew-1; i++){
        if(ans[i]==ans[i+1]){
            return false;
        }
    }
    return true;
}