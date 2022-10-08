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

class Solution{
	private:
		bool isSafe(int index1,int index2,int n,vector<vector<int>> visited,vector<vector<int>> &m){
			//cout << "checking" << endl;
			//cout << "index1 is : " << index1 << " index2 is : " << index2 << endl;
			if ( (index1>=0 && index1<n) && (index2>=0 && index2<n) && visited[index1][index2]== 0 && m[index1][index2]==1)	
			{
			//	cout << "index1 is : " << index1 << " index2 is : " << index2 << " visited is : " << visited[index1][index2] << " m is: " << m[index1][index2] << endl;
				//cout << "satisfied" << endl;
				return true;
			}
			else{
				return false;
			}
		}
		void solve(vector<vector<int>>&m, vector<string> & ans, string output,vector<vector<int>> visited, int index1,int index2,int n){
			cout << "n is : " << n << " index1 is : " << index1 << " index2 is : " << index2 << endl;
			// base case
			if (index1 == n-1 && index2 == n-1)
			{
				cout << "got one path" << endl;
				ans.push_back(output);
				return;
			}
			visited[index1][index2] = 1;
			// 4 choices 
			cout << "check" << endl;
			// up
			int new_index1 = index1-1;
			int new_index2 = index2;
			if (isSafe(new_index1,new_index2,n,visited,m))
			{
				cout << "check" << endl;
				//cout << "going up" << endl;
				output.push_back('U');
				solve(m,ans,output,visited,index1-1,index2,n);
				cout << "pop back action U" << endl;
				output.pop_back();
			}

			//right
			new_index1 = index1;
			new_index2 = index2+1;
			if (isSafe(new_index1,new_index2,n,visited,m))
			{
				cout << "check" << endl;
				cout << "going right" << endl;
				output.push_back('R');
				solve(m,ans,output,visited,index1,index2+1,n);
				cout << "pop back action R" << endl;
				output.pop_back();
			}
			//left
			new_index1 = index1;
			new_index2 = index2-1;
			if (isSafe(new_index1,new_index2,n,visited,m))
			{
				cout << "check" << endl;
				cout << "going left" << endl;
				output.push_back('L');
				solve(m,ans,output,visited,index1,index2-1,n);
				cout << "pop back action L" << endl;
				output.pop_back();
			}


			//cout << "here we go" << index1 << " " << index2<< endl;
			//cout << m[1][0] << endl;
			//down
			new_index1 = index1+1;
			new_index2 = index2;
			if (isSafe(new_index1,new_index2,n,visited,m))
			{
				cout << "check" << endl;
				cout << "going down" << endl;
 				output.push_back('D');
				solve(m,ans,output,visited,index1+1,index2,n);
				cout << "pop back action D" << endl;
				output.pop_back();
			}

			

			// making visited empty
			cout << "earsing visited mage" << endl;
			visited[index1][index2] =0;



			


		}
	public:
		vector<string> findPath(vector<vector<int>>& m, int n){
			vector<string> ans;
			if (m[0][0]==0)
			{
				return ans;
			}
			string output;
			int index1 = 0;
			int index2 = 0;
			vector<vector<int>> visited = m;
			for(int i = 0; i < n; i++){
				for (int j = 0; j < n; ++j)
				{
					visited[i][j] = 0;
				}
			}
			solve(m,ans,output,visited,index1,index2,n);
			return ans;
		}	
};

int main(){
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout <<  m[i][j] << " ";
            }nl
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}