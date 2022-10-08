#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	string ans = "YES";
	for (int i = 0; i < n/2; ++i)
	{
		if (s[i]!=s[n-i-1])
		{
			ans = "NO";
			break;
		}
	}
	cout << ans << endl;
}