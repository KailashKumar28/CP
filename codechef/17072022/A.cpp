#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int ans = 0;
		int x,y,z;
		cin >> x >> y >> z;
		
		if(x%3 == 0){
			ans = (x*y) + ((x/3)-1)*z;
		}
		else{
			ans = (x*y) + (x/3)*z;
		}
		cout << ans << endl;
	}
}