#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;

bool ifPossible(std::vector<ll>arr, ll n, ll m , ll mid){
	ll sum = 0;
	for (ll i = 0; i < n; ++i)
	{
		if(arr[i]>=mid){
			sum = sum + arr[i]-mid;
			if (sum >= m)
			{
				return true;
			}
		}
	}
	return false;
}

ll EKO(std::vector<ll>arr, ll n, ll m){
	sort(arr.begin(), arr.end());
	ll s = 0;
	ll e = arr[n-1];
	ll mid = s + (e-s)/2;
	//cout << s << " "<< mid << " " << e << endl;
	ll ans = -1;
	while(s<=e){
		if (ifPossible(arr,n,m,mid))
		{
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid -1;
		}
		mid = s + (e-s)/2;
		//cout << s << " "<< mid << " "<<e << endl;
	}
	return ans;
}

int main(){
	ll n,m;
	cin >> n >> m;             // n = number of trees and m is required wood
	std::vector<ll> arr(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> arr[i];    // heights of n trees
	}
	ll ans = EKO(arr,n,m);
	cout << ans << endl;
}