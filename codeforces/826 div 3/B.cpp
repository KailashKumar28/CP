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

// vector<int> check(vector<int> output ){
	
// 	int n = output.size();
// 	// for(int i = 0; i < n; i++){
// 		// cout << output[i] <<  " ";
// 	// }cout << endl;
// 	vector<int> ans;
// 	ans.push_back(-1);
// 	if(output[0] == 0 || abs(output[1]-output[0]) != 1){
// 		// cout << "c1 " << endl;
// 		return ans;
// 	}
// 	if(output[n-1] == n || abs(output[n-1]-output[n-2]) != 1){
// 		// cout << "c1 " << endl;
		
// 		return ans;
// 	}
	
// 	for(int i = 1; i < output.size()-1; ){
// 		if(output[i] != i+1 && (abs(output[i] - output[i-1]) == 1 || abs(output[i] - output[i+1]) == 1)){
// 			i++;
// 		}
// 		else{
// 			// cout << "c1 " << endl;
			
// 			return ans;
// 		}
// 	}
// 	ans.pop_back();
// 	for(int i = 0; i < n; i++){
// 		ans.push_back(output[i]);
// 	}
// 	return ans;
// }

// vector<int> solve(vector<int> output, int n){
// 	vector<int> temp;
// 	do{
// 		temp =  check(output);
// 		if(temp.size() > 1){
// 			break;
// 		}
// 	}while(next_permutation(output.begin(), output.end()));
// 	return temp;
// }
vector<int> diff(int n){
	vector<int> output;
	if (n == 3){
		output.push_back(-1);
		return output;
	}
	output.push_back(n);
	output.push_back(n-1);
	if(n%2 == 0){
		
		for(int i = n-2; i > 0; i--){
			output.push_back(i);
		}
		return output;
	}
	else{
		
		for(int i = 1; i < n-1; i++){
			output.push_back(i);
		}
		return output;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		// approach is make all possible permutations and check the compatibility condition for the ans;
		
		// vector<int> output;
		// output.push_back(n-1);
		// output.push_back(n);
		// for(int i = n-2; i >=1; i--){
		// 	output.push_back(i);
		// }
		
		// vector<int> ans =  solve(output,n);
		// int m = ans.size();
		// for(int i = 0; i < m ; i++){
		// 	cout << ans[i] << " ";
		// }cout << endl;
		
		vector<int> ans = diff(n);
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i] << " ";
		}cout << endl;
		
		
	}	
}
