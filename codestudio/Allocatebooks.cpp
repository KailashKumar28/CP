#include <bits/stdc++.h>
using namespace std;

bool isPossible(std::vector<int> arr, int n, int m, int mid){
	int sum = 0;
	int studentcount = 1;
	for (int i = 0; i < n; ++i)
	{
		if (sum + arr[i] <= mid)
		{
			sum += arr[i];
		}
		else{
			studentcount++;
			if (studentcount>m || arr[i]> mid)
			{
				return false;
			}
			else{
				sum = arr[i];
			}
		}
	}
	return true;
}


int allocateBooks(std::vector<int>arr , int n, int m){
	int s = 0;   //start
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	cout << sum << endl;

	int e = sum;
	int mid = s + (e-s)/2;
	int ans = -1;

	while(s<=e){
		if (isPossible(arr,n,m,mid))
		{
			ans = mid;
			e = mid -1;
		}
		else{
			s = mid+1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n,m; // n= number of books  and m = number of students
		cin >> n >>m;
		std::vector<int> pages(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> pages[i]; // number of pages in book i
		}

		for (int i = 0; i < n; ++i)
		{
			cout << pages[i] << " ";
		}
		cout << endl;


		int ans = allocateBooks(pages, n,m);
		cout << ans << endl; 
	}
}