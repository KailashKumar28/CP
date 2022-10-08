#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << 
		// }
		if(n==3){
        	cout<<1<<" "<<2<<" "<<3<<endl;
    	}
    	cout<<n<<" "<<n-2<<" ";
    	for(int i=1;i<n-3;i++){
        	cout<<i<<" ";
    	}
    	cout<<n-3<<" "<<n-1<<endl;
	}
}