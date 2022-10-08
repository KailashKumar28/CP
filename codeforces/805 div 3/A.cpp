#include <bits/stdc++.h>
using namespace std;

int countdigit( int n){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while (n != 0){
        n = n / 10;
        count++;
    }
    return count;
}



int main(){
    int t;
    cin >>t;
    int temp = t;
    vector<int> data;
    while(t--){
        int m;
        cin >> m;
        int p = countdigit(m);
        data.push_back(m-pow(10,p-1));
    }
    for(int j =0; j< temp; j++){
        cout << data[j]<< endl;
    }
}