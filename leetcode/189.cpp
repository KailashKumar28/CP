#include <bits/stdc++.h>
using namespace std;

void rotateArray(std::vector<int> arr, int k){
	int n = arr.size();
	std::vector<int> temp(n);
	for (int i = 0; i < n; ++i)
	{
		temp[(i+k)%n] = arr[i];
	}
	arr = temp;
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	int k;
	cin >> k;
	std::vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	rotateArray(arr,k);
}