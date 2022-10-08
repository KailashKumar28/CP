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
int substring(string s, int k){
	int n = s.length();
	if(n==0 || n<k) return 0;
	if(k<=1) return n;

	unordered_map<char,int> counts;
	for(char c: s){
		counts[c] +=1;
	}
	int l = 0;
	while(l<n && counts[s[l]] >=k) l++;
	if(l>=n-1) return l;

	int ls1 = substring(s.substr(0,l),k);
	while(l<n && counts[s[l]]<k) l++;
	int ls2 = (l<n) ? substring(s.substr(l),k) : 0;
	return max(ls2,ls1);
}


int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	cout << substring(s,k) << endl;

}