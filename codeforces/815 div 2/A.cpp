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

bool isInteger(double N)
{
 
    // Convert float value
    // of N to integer
    int X = N;
    cout << "n is : " << N << " X is : " << X << endl;
    cout << float(N) << endl;
 	cout << float(X) << endl;
    double temp2 = N - (float(X));
 	
    // If N is not equivalent
    // to any integer
    cout << "temp is : " << temp2 << endl;
    if (temp2 > 0) {
        return false;
    }
    return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		float x = float(a)/float(b);
		float y = float(c)/float(d);
		float p = (float(a)*float(d))/(float(b)*float(c));
		float q = (float(b)*float(c))/(float(a)*float(d));
		cout << "p is : " << p << " q is : " << q << endl;
		cout << "x is ; " << x << " y is : " << y  << endl;
		if (x==y)
		{
			cout << 0 << endl;
		}
		else if(p==0 || q ==0){
			cout << 1 << endl;
		}
		else if (p>1)
		{
			if(isInteger(p)){
				cout << 1 << endl;
			}
			else{
				cout << 2 << endl;
			}
		}
		else if(q > 1){
			cout << "q is : " << q << endl;
			if(isInteger(q)){
				cout <<"h" << 1 << endl;
			}
			else{
				cout <<"q "  << 2 << endl;
			}
		}
		
	}
}