// #include <bits/stdc++.h>
// using namespace std;

// // int gcd(int *arr)
// // {
// //     // Everything divides 0
// //     if (n == 1)
// //        return 1;

// //     return gcd(n);
// //     return gcd(a, b-a);
// // }

// void solve(vector<int>arr, int n, int x){
// 	if (n==)
// 	{
// 		return;
// 	}

// }

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,x;
// 		cin >> n >> x;
// 		vector<int>A(n);
// 		int ans = -1;
// 		if (x>2n && x< n)
// 		{
// 			ans = -1;
// 		}
		
// 		for (int i = 0; i < n; ++i)
// 		{
// 			A[i] = i+1;
// 		}
// 		vector<int>answer(n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			answer[i] = x-(n-1);
// 		}

// 		solve(arr,1,x);
// }



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while (t--){
     int n,x;
     cin>>n>>x;
     if (x<n){
         cout<<-1<<endl;
         continue;
     }
     cout<<x-n+1<<" ";
     for (int i=1;i<=n;i++){
         if (i!= x-n+1   ){
             cout<<i<<" ";
         }
     }
     cout<<endl;
     
     
 }
 return 0;
}