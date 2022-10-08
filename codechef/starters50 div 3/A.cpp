#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		int ans = max(x,y)-((x+y)/2);
		cout << ans << endl;
	}
}