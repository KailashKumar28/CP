#include <bits/stdc++.h>
using namespace std;

int minCookTime(vector<int> &rank, int m){
	sort(rank.begin(), rank.end());
	int n = rank.size();
	int s = 0;
	int e = rank[n-1];
	int ans = -1;
	int mid = s + (e-s)/2;
	return ans;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		std::vector<int> rank(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> rank[i];
		}
		int ans;
	}
}