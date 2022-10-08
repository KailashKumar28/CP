#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        set<int> s;
        int x;
        cin >> x;
        s.insert(x);
        string ans = "YES";
        std::vector<int> v(3);
        for (int i = 0; i < 3; ++i)
        {
        	cin >> v[i];
        }
        if (v[x-1]!=0)
        {
        	s.insert(v[x-1]);
        	if (v[v[x-1]-1]!= 0)
        	{
        		s.insert(v[v[x-1]-1]);
        		if (s.size()==3)
        		{
        			ans = "YES";
        		}
        		else{
        			ans = "NO";
        		}
        	}
        	else{
        		ans = "NO";
        	}
        }
        else{
        	ans = "NO";
        }
        cout << ans << endl;
    }
}