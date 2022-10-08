#include <bits/stdc++.h>
using namespace std;


bool checkEqual(int a[26], int b[26]){
	for (int i = 0; i < 26; ++i)
	{
		if (a[i]!=b[i])
		{
			return false;
			break;
		}
	}
	return true;
}

bool permutaionSubstring(string s1, string s2){
	int n = s1.length();
	int m = s2.length();
	
	// character count array for string s1;
	int count1[26] = {0};
	for (int i = 0; i < s1.length(); ++i)
	 {
	 	int index1 = s1[i] - 'a';
	 	count1[index1]++;
	 } 
	 // for (int i = 0; i < 26; ++i)
	 // {
	 // 	cout << count1[i] << " ";
	 // }
	 // cout << endl;

	 // traverse s2 string in window size of s1 lenght and compare
	 int windowsize = s1.length();
	 // charactor count of s2 string in window size

	 int i = 0;
	 int p = 0;
	 // running the window
	 while(m>=n && p<= s2.length()-windowsize){
	 	int count2[26] = {0};
	 	for (int i = p; i < p + windowsize; ++i)
	 	{
	 		//cout << i << endl;
	 		// cout << s2[i] << endl;
	 		int index2 = s2[i] - 'a';
	 		//cout << index2 << endl;
	 		count2[index2]++;
	 	}
	 	// for (int i = 0; i < windowsize; ++i)
	 	// {
	 	// 	cout << count1[i] << " ";
	 	// }
	 	// cout << endl;
	 	// for (int i = 0; i < windowsize; ++i)
	 	// {
	 	// 	cout << count2[i] << " ";
	 	// }
	 	// cout << endl;
	 	if (checkEqual(count1 , count2))
	 	{
	 		return true;
	 		break;
	 	}
	 	else{
	 		p++;
	 	}

	 }
	 return false;
}

int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	cout << permutaionSubstring(s1, s2) << endl;

}