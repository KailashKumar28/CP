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
int findlowest(vector<int> & damage){
	int ans  = -1;
	int data = INT_MAX;
	for(int i = 0; i < damage.size(); i++){
		if(damage[i] <  data){
			ans = i;
			data = damage[i];
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> type(n);
		for(int i =0 ; i < n; i++){
			cin >> type[i];
		}
		vector<int> damage(n);
		for(int i = 0; i < n; i++){
			cin >> damage[i];
		}
		int n1, n2;
		n1 = 0;
		n2 = 0;
		for(int i = 0; i < n; i++){
			if(type[i] == 0){
				n1++;
			}
			else{
				n2++;
			}
		}
		vector<int> type_0;
		vector<int> type_1;

		for(int i = 0; i < n; i++){
			if(type[i] == 0){
				type_0.push_back(damage[i]);
			}
			else{
				type_1.push_back(damage[i]);
			}
		}
		sort(type_0.begin(), type_0.end());
		sort(type_1.begin(), type_1.end());
		long long int ans = 0;
		int lowest;
		if(n1> n2){
			lowest = 0;
		}
		else if(n2> n1){
			lowest = 1;
		}
		else{
			int temp = findlowest(damage);
			lowest = type[temp];
		}

		if(lowest == 0){
			ans+= type_0[0];
			cout << ans << endl;
			int p1  = n1;
			int p2  = n2;
			int index0 = n1;
			int index1 = n2;
			for(int i = n2-1; i>=0; i--){
				if(p1> 0){
					ans = ans + 2*type_1[i];
					// 8cout << 2*type_1[i] << endl;
					p1--;
					index1 = i;
				}
			}
			for(int i = n1-1; i>0; i--){
				if(p2> 0){
					ans = ans + 2*type_0[i];
					// cout << 2*type_0[i] << endl;
					p2--;
					index0 = i;
				}
			}
			// cout << index0 << " " << index1 << endl;
			if(index0> 1){
				for(int i = index0-1; i> 0; i--){
					ans+= type_0[i];
				}
			}
			if(index1> 0){
				for(int i = index1-1; i>= 0; i--){
					ans+= type_1[i];
				}
			}
		}
		else{
			ans += type_1[0];
			// cout << ans << endl;
			int p1  = n1;
			int p2  = n2;
			int index0 = n1;
			int index1 = n2;
			for(int i = n2-1; i>0; i--){
				if(p1> 0){
					
					ans = ans + 2*type_1[i];
					p1--;
					index1 = i;
				}
			}
			for(int i = n1-1; i>=0; i--){
				if(p2> 0){
					

					ans = ans + 2*type_0[i];
					p2--;
					index0 = i;
				}
			}
			if(index0> 0){
				

				for(int i = index0-1; i>= 0; i--){
					ans+= type_0[i];
				}
			}
			if(index1> 1){
				// cout << " check" << endl;

				for(int i = index1-1; i> 0; i--){
					// cout << i << endl;
					
					int abc = type_1[i];
					ans = ans +  abc;
					// cout << abc << endl;
					// cout << ans << endl;
				}
			}
		}
		cout << ans << endl;
		

	}
}