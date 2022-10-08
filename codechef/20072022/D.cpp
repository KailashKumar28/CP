#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		std::vector<int> data(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>data[i];
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << data[i] << " ";
		// }
		// cout << endl;
		sort(data.begin(),data.end());
		int bkpt=0;
      	int count=0;
      	for (int i=0;i<n;i++){
        	if (data[i] >= i-bkpt+1){
            	continue;
          	}
          	else {
            	count++;
            	bkpt = i;
          	}
	    }
		cout << count+1 << endl;
	}
}