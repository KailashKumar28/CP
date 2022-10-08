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
#define cinv(v) ll n; cin>>n; vl v; fo(i,0,n){ll xx; cin>>xx; v.pb(xx)}
#define nl cout<<endl;
#define co(a) {cout<<a<<" ";}
#define cou(a) {cout<<a<<" "; nl}
#define lcou(v) {afo(v) cout<<x<<" "; nl}
#define cy(x) {if(x) cou("YES") else cou("NO")}
#define siz(v) v.size()
ll M = 1e9+7;

int positionPivot(vl & arr, int s, int e, int pivot){
	int count =0;
	foe(i,s+1,e){
		if(arr[i]<=pivot){
			count++;
		}
	}
	int pivotindex = s + count;
	cout << "pivot is at ; :" << s << " pivotindex is; " << pivotindex << endl;

	swap(arr[pivotindex],arr[s]);

	// now place smaller elements than pivot to left and greater elements to the right side of pivotindex;

	
	int i = s;
	int j = e;
	while(i<pivotindex && j> pivotindex){
		while(arr[i] <= pivot) 
        {
            i++;
            cout << " i " << i << " j " << j << endl;
        }

        while(arr[j] > pivot) {
            j--;
            cout << " i " << i << " j " << j << endl;
        }
		if(i<pivotindex && j> pivotindex){
			swap(arr[i],arr[j]);
			cout << "swaping:"<<  " i " << i << " j " << j << endl;
			i++;
			j--;
		}
			
	}
	// co("pivot is :") 
	// cou(pivotindex)
	foe(i,0,e){
		co(arr[i])
	}nl
	return pivotindex;
}

void solve(vl& arr, int s, int e){
	int pivot = arr[s];
	co("pivot is : ")
	cou(pivot)
	if (s>=e)
	{
		return;
	}
	// check the right position for the pivot element and place the pivot at right position
	int index = positionPivot(arr,s, e, pivot);

	// made the recursive call 
	solve(arr,s,index-1);
	solve(arr,index+1,e);

}

int main(){
	
	cinv(arr)
	int s = 0;
	int e = n-1;
	solve(arr,s,e);
	fo(i,0,n){
		co(arr[i])
	}nl
}