#include <bits/stdc++.h>
using namespace std;




int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int ans;
		// if(n==2 && m==1){
		// 	ans = 2;
		// }
		// else if (n==1 && m==2)
		// {
		// 	ans = 0;
		//}
		if(n%2!=0 && m%2!=0){
			ans = n+m-1;
		}
		else if (n%2!=0 && m%2==0)
		{
			ans = m;
		}
		else if(n%2==0 && m%2!= 0){
			ans = n;
		}
		else{
			ans = 0;
		}
		cout <<ans << endl;
	}
}