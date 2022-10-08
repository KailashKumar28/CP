#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int ans = 0;
		int n,k,x,y;
		cin >> n >> k >> x >> y;
		if(x>=y){
			ans = ans + k*x + (n-k)*y;
		}
		else{
			ans = n*x;
		}
		cout << ans << endl;
	}
}