#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        int count;
        sort(a, a+n);
        /* for (int i = 0;i < n; i++){
            cout << a[i];
        } */
        if(n ==1){
            count = 1;
        }
        for (int i = 0;i < n-1; i++){
            
            if(a[i+1]-a[i]==1){
                count  = 2;
                break;
            }
            else{
                count = 1;
            }
        }
        cout << count << endl;
    }
}