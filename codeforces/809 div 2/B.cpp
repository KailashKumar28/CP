#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		std::vector<int> C(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> C[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cout << C[i] << " ";
		}
		cout << endl;

		sort(C.begin(), C.end());

		for (int i = 0; i < n; ++i)
		{
			cout << C[i] << " ";
		}
		cout << endl;

		std::vector<int> ans;

		for (int i = 0; i < n; ++i)
		{
			int count = 0;
			for (int j = 0; j < n; ++j)
			{
				if(i+1 == C[j]){
					count++;
				}
			}
			ans.push_back(count);
		}

		for (int i = 0; i < n; ++i)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}