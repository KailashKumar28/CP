#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvs vector<vs>
#define vvc vector<vc>
#define vpll vector<pair<ll,ll>>
#define vplll vector<pair<pair<ll,ll>,ll>>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define vass(v,s) v.assign(s.begin(),s.end());
#define pb(a) push_back(a);
#define saa(a) sort(a,a+n);
#define sad(a) sort(a,a+n, greater<ll>());
#define sva(v) sort(v.begin(), v.end());
#define svd(v) sort(v.rbegin(), v.rend());
#define mia(m,a) ll m = *min_element(a,a+n);
#define maa(m,a) ll m = *max_element(a,a+n);
#define suma(s,a) ll s = 0; s = accumulate(a,a+n,s);
#define miv(m,v) ll m = *min_element(v.begin(), v.end());
#define mav(m,v) ll m = *max_element(v.begin(), v.end());
#define fo(i,j,n) for(ll i = j; i < n; ++i)
#define foe(i,j,n) for(ll i = j; i <= n; ++i)
#define rfo(i,j,n) for(ll i = n - 1; i >= j; --i)
#define rfoe(i,j,n) for(ll i = n; i >= j; --i)
#define afo(v) for(auto &x : v)
#define cin(a) ll a[n]; fo(i,0,n){cin>>a[i];}
#define cinvl(v) ll n; cin>>n; vl v; fo(i,0,n){ll xx; cin>>xx; v.pb(xx)}
#define cinv(v) int n; cin>>n; vi v; fo(i,0,n){int xx; cin>>xx; v.pb(xx)}
#define nl cout<<endl;
#define co(a) {cout<<a<<" ";}
#define cou(a) {cout<<a<<" "; nl}
#define lcou(v) {afo(v) cout<<x<<" "; nl}
#define cy(x) {if(x) cou("YES") else cou("NO")}
#define siz(v) v.size()
ll M = 1e9+7;

// int lcm(vector<int> nums, int n){
// 	int sum = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int a = i + 1;
// 		int b = nums[i];
// 		int ans;
// 		if(a>b){
// 	  	 	ans = a;
// 		}
// 	   	else{
// 	   		ans = b;
// 	   	}
// 	   	while(1) {
// 	    	if( ans%a==0 && ans%b==0 ) {
// 	        	//cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
// 	         	break;
// 	      	}
// 	      	ans++;
// 	   	}
// 	   	sum += ans;
// 	}
// 	return sum;
// }

// void solve(vector<int> & nums, vector<int> & ans, int index, int output,int n){
// 	// base case
// 	//cout << "index is : " << index << endl;
// 	if (index >= nums.size())
// 	{
// 		if (lcm(nums,n) > output)
// 		{
// 			output = lcm(nums,n);
// 			//cout << output << endl;
// 			ans = nums;
// 			return;
// 		}
// 	}

// 	for(int i = index; i < nums.size();i++){
// 		//cout << "swaping elements are : " << nums[index] << " and " << nums[i] << endl;
// 		swap(nums[index],nums[i]);
// 		solve(nums,ans,index+1,output,n);
// 		swap(nums[index],nums[i]);		// backtracking step
// 	}
// }

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
		{
			arr[i] = i +1;
		}
		arr[0] = n;
		for (int i = 1; i < n; ++i)
		{
			arr[i] = i;
		}
		// int output = 0;
		// vector<int> ans;
		// int index = 0;
		// solve(arr,ans,index,output,n);
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << ans[i] << " ";
		// }nl
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}nl

	}
}