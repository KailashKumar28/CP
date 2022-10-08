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

void solve(vector<int>nums, vector<int>& output, int index, vector<vector<int>> & ans){
        // base case
        if (index >= nums.size())
        {
        	cout << "pushing output values in ans " << endl;
            ans.push_back(output);
            return;
        }



        //exclude
        cout << "index is : " << index <<" and excluded element is : " << nums[index] <<  endl; 
        solve(nums,output,index+1,ans);
        
        // include
        int element = nums[index];
        cout <<"index is : " << index << " and included element is : " << element << endl;
        output.push_back(element);
        cout << "output is : ";
        for(int i = 0; i< output.size(); i++){
            cout << output[i] << " ";
        }cout << endl;
        solve(nums,output,index+1,ans);
        cout << "removed in backtraking element is: " << output[output.size()-1] << endl;

        output.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index = 0;
        solve(nums,output,index,ans);
        cout << "output after all process is :";
        for(int i = 0; i< output.size(); i++){
            cout << output[i] << " ";
        }cout << endl;
        cout << "ans vec is : ";
        for (int i = 0; i < ans.size(); ++i)
        {
        	fo(j,0,ans[i].size()){
        		co(ans[i][j])
        	}nl
        }
        return ans;
    }



// void solve(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs) {
//     subs.push_back(sub);
//     for (int j = i; j < nums.size(); j++) {
//         sub.push_back(nums[j]);
//         solve(nums, j + 1, sub, subs);
//         sub.pop_back();
//     }
// }
// vector<vector<int>> subsets(vector<int>& nums) {
//     vector<vector<int>> subs;
//     vector<int> sub;
//     solve(nums, 0, sub, subs);
//     return subs;
//}
int main(){
	cinv(arr)
	vector<vector<int>> ans = subsets(arr);
	fo(i,0,ans.size()){
		fo(j,0,ans[i].size()){
			co(ans[i][j])
		}nl
	}
}