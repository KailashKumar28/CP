#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string A,B;
		cin >> A;
		cin >> B;
		std::vector<int> v1;
		std::vector<int> v2;
		for (int i = 0; i < n; ++i){
			v1.push_back(A[i]);
		}
		for (int i = 0; i < n; ++i){
			v2.push_back(B[i]);
		}


		for (int i = 0; i < n; ++i){
			cout << A[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < n; ++i){
			cout << B[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < n-1; ++i){
			if(A[i]!=B[i]){
				int temp = A[i];
				A[i] = (temp)^(A[i+1]);
				A[i+1] = A[i];
			}
		}


		for (int i = 0; i < n; ++i){
			cout << A[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < n; ++i){
			cout << B[i] << " ";
		}
		cout << endl;




	}
}