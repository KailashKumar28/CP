#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans = "YES";
		std::vector<char> v;
		for (int i = 0; i < n; ++i)
		{
			v.push_back(s[i]);
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << v[i] << " ";
		// }
		// cout << endl;
		for (int i = 0; i < n/2; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if(v[i]== v[j] && (j-i)%2==1){
					swap(v[j],v[n-1-i]);
				}
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << v[i] << " ";
		// }
		// cout << endl;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]!=v[n-1-i]){
				ans = "NO";
			}
		}
		cout << ans << endl;
	}
}