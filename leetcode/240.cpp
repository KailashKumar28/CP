#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<vector<int>>arr(n,vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	string ans = "false";
	int s = 0;
	int e = m-1;
	cout << n << endl;
	while(s<n && e>=0){
		cout << s << e << endl;
		if (arr[s][e]== k)
		{
			cout << arr[s][e] << endl;
			ans = "true";
			break;
		}
		else if (k<arr[s][e])
		{
			e--;
		}
		else{
			s++;
		}
	}
	cout << ans << endl;

}