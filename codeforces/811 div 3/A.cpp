#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, H, M;
		cin >> n >> H >> M;
		vector<int>h(n);
		vector<int>m(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> h[i] >> m[i];
		}
		int index = 0;
		for (int i = 0; i < n; ++i)
		{
			if (h[i]<H || (h[i]== H && m[i] < M))
			{
				h[i] += 24;
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << h[i] << " ";	
		// }
		// cout << endl;
		//cout << h[index] << " " << m[index] << endl;
		for (int i = 0; i < n; ++i)
		{
			if ((h[i]<h[index]) || (h[i]==h[index] && m[i] <= m[index]))
			{
				index = i;
			}
		}
		int ans_min;
		int ans_hr;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << h[i] << " " << m[i]
		// }
		// cout << index << endl;
		// cout << h[index] << " " << m[index] << endl;
		if (m[index] < M)		
		{
			ans_min = 60+m[index]-M;
			ans_hr = h[index]-H-1;
		}
		else{
			ans_min = m[index]-M;
			ans_hr = h[index]-H;
		}
		cout << ans_hr << " " << ans_min << endl;
	}
}
