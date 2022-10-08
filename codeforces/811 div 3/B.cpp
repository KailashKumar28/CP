#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int count = 0;
		int i = a.size()-1;
		int j = i-1;
		while(i>0 && j >=0){
		//for (int i = 0; i < a.size()-1;i++)
		//{
			//for (int j = i + 1; j < a.size();)
			//	{
			if (a[i] == a[j])
			{
				a.erase(a.begin()+0, a.begin()+j+1);
				count += j+1;
				//cout<< i << " " << j << endl;
				i = a.size()-1;
				j = i-1;
				// for (int i = 0; i < a.size(); ++i)
				// {
				// 	cout << a[i] << " ";
				// }
				// cout << endl;
			}
			// else if (j == a.size())
			// {
			// 	i++;
			// 	j = i+1;
			// }
			else{
				j--;
				if (j == -1)
				{
					i--;
					j = i-1;
				}
			}
			// cout << a.size() << endl;
			// cout << i << " " << j << endl; 
		}
		cout << count << endl;

		// cout << endl;
		// cout << endl;
	}
}