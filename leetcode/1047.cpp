#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	//int i = 0;
	//while(i<s.length()-1){
// 		if (s[i]== s[i+1])
// 		{
// 			cout << i << endl;
// 			s.erase(s.begin() + i,s.begin()+i+2);
// 			if (s.length()== 0)
// 			{
// 				break;
// 			}
// 			i = 0;
// 		}
// 		else{
// 			i++;
// 		}
// 		cout << s << endl;
// 	}
// 	cout << s << endl;
	string res;
	for(char ch: s){
		if (!res.empty() && res[res.length()-1] == ch) res.pop_back();
		else res += ch;
	}
	cout << res << endl;
	
}