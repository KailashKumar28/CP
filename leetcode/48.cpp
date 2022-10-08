#include <bits/stdc++.h>
using namespace std;

int printMatrix(vector<vector<int>>arr, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	vector<vector<int>>arr(n,std::vector<int> (n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}
	printMatrix(arr,n);
	int p = 0;
	while(p<n/2){
		for (int i = p; i < n-1-p; ++i)
		{
			cout << arr[p][i] << " <=> " << arr[i][n-1-p] << endl;
			swap(arr[p][i],arr[i][n-1-p]);
			printMatrix(arr,n);
			cout << arr[p][i] << " <=> " << arr[n-1-p][n-1-i] << endl;
			swap(arr[p][i],arr[n-1-p][n-1-i]);
			printMatrix(arr,n);
			cout << arr[p][i] << " <=> " << arr[n-1-i][p] << endl;
			swap(arr[p][i],arr[n-1-i][p]);
			printMatrix(arr,n);
		}
		p++;
	}
}