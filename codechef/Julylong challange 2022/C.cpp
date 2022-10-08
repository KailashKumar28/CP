#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,n;
		int count = -1;
		cin >> a >> b >> n;
		int x = n;
		if (max(a,b)%min(a,b)==0)
		{
			cout << -1 << endl;
		}
		else{
			while(x<INT_MAX){
				if (x%a==0 && x%b!=0)
				{
					cout << x << endl;
					break;
				}
				else{
					x++;
				}
			}
		}
	}
}