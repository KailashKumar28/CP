#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> arr(n,std::vector<int> (m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	std::vector<int> A;
	for (int i = 0; i < m; i++){
        int j = 0;
        while(i<m){
            int ans = 0;
            if(j<n-1 && i%2==0){
                ans= ans + arr[j][i];
                j++;
            }
            else if(j>0 && i%2 == 1){
                ans = ans + arr[j][i];
                j--;
            }
            else if(j == 0){
                ans = ans + arr[j][i];
                i++;
            }
            else if(j = n-1){
                ans = ans + arr[j][i];
                i++;  
            }
            A.push_back(ans);
            cout <<"index j : "<<  j << " index i : " << i <<  " ans: "<<ans << endl;
            
        }
        for (int i = 0; i < m*n; ++i)
        {
        	cout << A[i] << " ";
        }
        cout << endl;
    }
}