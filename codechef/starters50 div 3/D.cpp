#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		set<int> ans;
		for (int i = 0; i < x; ++i)
		{
			for (int j = i+1; j <= x; ++j)
			{
				if (i+j == x || i*j == y)
				{
					ans.insert(i);
					ans.insert(j);
				}
			}
		}
		int count = 0;

		if (ans.size()< 4){
			cout << -1 << endl;
		}
		else{
			for (auto it1 = ans.begin(); it1 !=
                             ans.end(); ++it1)
			{
				for (auto it2 = it1; it2 !=
                             ans.end(); ++it2){
					if ((*it2 + *it1 == x || (*it2)*(*it1)== y)&& count < 2)
					{
						count++;
						cout << *it1 << " " << *it2 << endl;
					}
				}
			}
		}
	}
}