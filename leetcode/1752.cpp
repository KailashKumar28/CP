#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	string ans = "true";
// 	std::vector<int> arr(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> arr[i];
// 	}

// 	int k  = 0;
// 	for (int i = 0; i < n-1; ++i)
// 	{
// 		if (arr[i+1]<arr[i])
// 		{
// 			k = i +1;
// 		}
// 	}
// 	cout << k << endl;
// 	std::vector<int> temp(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		temp[i] = arr[(i+k)%n];
// 	}

// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout << temp[i] << " ";
// 	}
// 	cout << endl;

// 	for (int i = 0; i < n-1; ++i)
// 	{
// 		if (temp[i+1]<temp[i])
// 		{
// 			ans = "false";
// 		}
// 	}

// 	cout << ans << endl;
// }


// alterante solution

int main(){
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int count = 0;

	for (int i = 0; i < n-1; ++i)
	{
		if (v[i+1]<v[i])
		{
			count++;
		}

	}
	if (v[n-1]>v[0])
	{
		count++;
	}
	string ans = "true";
	if (count <=1)
	{
		ans = "true";
	}
	else{
		ans = "false";
	}
	cout << ans << endl;
}
