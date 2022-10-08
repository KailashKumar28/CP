#include <bits/stdc++.h>
using namespace std;

bool ifPossible(std::vector<int> arr, int n, int k, int mid){
	int lastposition = arr[0];
	int cowcount = 1;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i]-lastposition>=mid){
			cowcount++;
			if (cowcount ==k)
			{
				return true;
			}
			lastposition = arr[i];
			
		}
	}
	return false;
}

int aggressiveCows(std::vector<int> stalls, int k){
	sort(stalls.begin(), stalls.end());
	int n = stalls.size();
	int s = 0;
	int e = stalls[n-1];
	int mid = s + (e-s)/2;
	//cout << s << mid << e << endl;
	int ans = -1;
	while(s<=e){
		if(ifPossible(stalls, n, k, mid)){
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
		//cout << s<<mid << e <<  endl;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k; // n = number of stalls and k = number of aggressive cows
		cin >> n >> k;
		std::vector<int> stalls(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> stalls[i];
		}

		int ans = aggressiveCows(stalls, k);
		cout << ans << endl;
	}
}