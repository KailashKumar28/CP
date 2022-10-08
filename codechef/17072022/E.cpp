#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		std::vector<int> v;
		for (int i = 0; i < n; ++i){
			int p;
			cin >> p;
			v.push_back(p);
		}


		int sum = 0;
		sort(v.begin(), v.end());


		// for (int i = 0; i < n; ++i){
		// 	cout << v[i] << " " ;
		// }
		// cout << endl;


		// int count = 0;
		// int index;
		// for (int i = 0; i < n; ++i){
		// 	if(sum<=(n-i-1)){
		// 		sum = sum + v[i];
		// 		count += 1;
		// 		index = i;
		// 	}
		// }
		int i =0;
		int count = 0;
		while(i<n){
      		sum+=v[i];
      		if(sum>=n){
				break;
			}
      		count++;
      		i++;
    	}

		cout << count << endl;
	}
}