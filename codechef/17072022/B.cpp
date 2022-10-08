#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		string ans = "YES";
		cin >> s;
		std::vector<int> v;
		
		string vovles = "aeiou";
		for (int i = 0 ; i < n;i++){
			int p = 0;
			for (int j = 0; j < 5; j++){
				if(s[i]== vovles[j]){
					p = 1;
					break;
				}
			}
			v.push_back(p);
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<< v[i] << endl;
		// }
		for (int i = 0; i < n-3; ++i)
		{
			if (v[i] == 0 && v[i+1]==0 && v[i+2]== 0 && v[i+3]==0){
				ans = "NO";
			}
		}
		cout << ans << endl;
	}
}