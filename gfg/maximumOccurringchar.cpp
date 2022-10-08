#include <bits/stdc++.h>
using namespace std;


char getMaxOccurchar(string s){
	int arr[26] = {0};
	for (int i = 0; i < s.length(); ++i)
	{
		int number;
		char ch = s[i];
		if (ch >= 'a' && ch <= 'z')
		{
			number = ch - 'a';
		}
		else{
			number = ch -'A';
		}
		arr[number]++;
	}
	int ans = -1;
	int maxi = -1;
	for (int i = 0; i < 26; ++i)
	{
		if (maxi<arr[i])
		{
			ans = i;
			maxi = arr[i];
		}
	}
	return 'a'+ans;
}

int main(){
	string s;
	cin >> s;
	cout << getMaxOccurchar(s) << endl;

}