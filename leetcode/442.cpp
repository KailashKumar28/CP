#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    vector<int> answer;
    for (int i= 0; i< N ; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< N; i++){
        int p = abs(arr[i]);
        if (arr[p-1]<0){
            
            arr[p-1] *= -1;
            answer.push_back(arr[i]);
        }
        else{
            arr[p-1] *= -1;
        }
    }
    for (int i = 0; i< answer.size(); i++){
        cout << answer[i] << " ";
    }
}