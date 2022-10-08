#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char s[n]; 
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	int i = 0;
	int  p = 0;
	while(i<n){
		int j = i+1;
		while(j<n && s[i] == s[j]){
			j++;
		}
		s[p++] =s[i];
		int count = j-i;
		if (count > 1)
		{
			string cnt = to_string(count);
			for(char ch:cnt){
				s[p++] = ch;
			}
		}
		i = j;
	}
	cout << s << endl;
}