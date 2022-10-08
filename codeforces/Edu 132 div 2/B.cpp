#include <bits/stdc++.h>
using namespace std;

int fallDamage(std::vector<int> a, int n, int p,int q){
	int damage = 0;
	// cout << "p :" << p << "  q :" << q << endl;
	if(p>q){
		while(p>q){
			if (a[p-1] >= a[p-1-1])
			{
				damage += a[p-1] - a[p-1-1];
				//cout << damage<< endl;
			}
			p = p-1;	
		}
	}
	else{
		while(p<q){
			if (a[p-1] >= a[p+1-1])
			{
				damage += a[p-1] - a[p+1-1];
				//cout << damage<< endl;
			}
			p = p+1;
		}
	}
	return damage;
}


int main(){
	int n, m;
	cin >> n >> m;
	std::vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	// vector<vector<int>>q;
	for (int i = 0; i < m; ++i)
	{
	// 	vector<int> temp;
		int s1, s2;
		cin >> s1 >> s2;
		cout << fallDamage(a,n,s1,s2)<< endl;
	// 	temp.push_back(s1);
	// 	temp.push_back(s2);
	// 	q.push_back(temp);
	// }
	
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// for (int i = 0; i < m; ++i)
	// {
	// 	cout << q[i][0]  << " " << q[i][1] << endl;
	// }

	// for (int i = 0; i < m; ++i)
	// {
	// 	cout << fallDamage(a,n,q[i][0],q[i][1])<< endl;
	}
}