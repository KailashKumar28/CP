#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int ans = -1;

	while(t--){
		int x,y,n,r;
		cin >> x >> y >> n >> r;
		if (r<x*n)
		{
			cout << ans << endl;
		}
		else{
			int s1;
			int s = 0; 
			int e = n;
			int mid = s + (e-s)/2;
			while(s<=e){
			    
				if ((n-mid)*x<=r-mid*y)
				{
					s1 = mid;
					s = mid + 1;
				}
				else{
				    e = mid -1;
				}
				mid = s + (e-s)/2;
			}
			int s2 = n-s1;
			cout << s2 << " " << s1 << endl;
		}
	}
}