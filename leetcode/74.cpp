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
	int e = n*m-1;
	int mid = s + (e-s)/2;
	cout << "start : " << s << " end : " << e << " mid : " << mid << endl;
	while(s<=e){
		if (arr[mid/m][mid%m] == k)
		{
			ans = "true";
			break;
		}
		else if (arr[mid/m][mid%m]>k)
		{
			e = mid-1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
		cout << "start : " << s << " end : " << e << " mid : " << mid << endl;
	}
	cout << ans << endl;
}