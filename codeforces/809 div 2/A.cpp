#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		std::vector<int> a(n);
		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}

		// for (int i = 0; i < n; ++i){
		// 	cout << a[i] << " ";
		// }
		// cout << endl;

		std::vector<int> str;
		for (int i = 0; i < m; ++i){
			int temp;
			temp = 0;
			str.push_back(temp);
		}

		// for (int i = 0; i < m; ++i){
		// 	cout << str[i] << " ";
		// }
		// cout << endl;

		for (int i = 0; i < n; ++i){
			if (str[m-a[i]]== 1){
				str[a[i]-1]=1;
			}
			else if (str[a[i]-1]== 1){
				str[m-a[i]]= 1;
			}
			else if(str[a[i]-1] == 0 && (a[i]-1)<= (m-a[i])){
				str[a[i]-1]= 1;
			}
			else{
				str[m-a[i]] = 1;
			}
		}

		// for (int i = 0; i < m; ++i){
		// 	cout << str[i] << " ";
		// }
		// cout << endl;	

		string s = "";
		for (int i = 0; i < m; ++i){
			if (str[i]==1){
				s = s + "A";
			}
			else{
				s = s + "B";
			}
		}

		cout << s << endl;
	}
}