#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){


    int num;
    cin >> num;
    int newint = 0;
    int n = 0;
    while (num){
        int lastdigit = num%2;
        if (lastdigit==0){
            newint = newint + pow(2,n);
        }
        n = n+1;
        num = num/2;
    }
    cout << newint << endl;
};
    

