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

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> first(n);
		vector<string> second(n);
		vector<string> third(n);
		for(int i = 0; i < n; i++){
			cin >> first[i];
		}
		for(int i = 0; i < n; i++){
			cin >> second[i];
		}
		for(int i = 0; i < n; i++){
			cin >> third[i];
		}
		// for(int i = 0; i < n; i++){
		// 	cout << first[i] << " ";
		// }nl
		// for(int i = 0; i < n; i++){
		// 	cout << second[i] << " ";
		// }nl
		// for(int i = 0; i < n; i++){
		// 	cout << third[i] << " ";
		// }nl
		int count1 = 3*n;
		int count2 = 3*n;
		int count3 = 3*n;
		for(int i = 0; i < n; i++){
			int p = 0;
			for (int j =0; j< n; j++){
				if(first[i]==second[j]){
					count1 -= 2;
					p++;
				}
			}
			for(int j = 0; j < n; j++){
				if(first[i]==third[j]){
					if(p == 1){
						count1--;
					}
					else{
						count1 -= 2;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			int p = 0;
			for (int j =0; j< n; j++){
				if(third[i]==second[j]){
					count3 -= 2;
					p++;
				}
			}
			for(int j = 0; j < n; j++){
				if(third[i]==first[j]){
					if(p == 1){
						count3--;
					}
					else{
						count3 -= 2;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			int p = 0;
			for (int j =0; j< n; j++){
				if(second[i]==first[j]){
					count2 -= 2;
					p++;
				}
			}
			for(int j = 0; j < n; j++){
				if(second[i]==third[j]){
					if(p == 1){
						count2--;
					}
					else{
						count2 -= 2;
					}
				}
			}
		}
		cout << count1 << " " << count2 << " " << count3 << endl;
	}
}