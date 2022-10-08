#include <bits/stdc++.h>
using namespace std;

bool ifPossible(std::vector<int> arr, int n, int k, int mid){
	int sum = 0;
	int paintercount  =1;
	for (int i = 0; i < n; ++i)
	{
		if(sum+arr[i]<= mid){
			sum += arr[i];
		}
		else{
			paintercount++;
			if(paintercount>k || arr[i] > mid){
				return false;
			}
			else{
				sum = arr[i];
			}
		}
	}
	return true;
}

int findLargestMinDistance(std::vector<int> arr, int n, int k){
	int s = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	int ans = -1;
	while(s<=e){
		if(ifPossible(arr, n, k , mid)){
			ans = mid;
			e = mid-1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k; // n = number of boards and k = number of painters
		cin >> n >> k;
		std::vector<int> arr(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int ans = findLargestMinDistance(arr, n, k);
		cout << ans << endl;
	}
}