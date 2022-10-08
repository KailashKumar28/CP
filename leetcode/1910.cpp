#include <bits/stdc++.h>
using namespace std;

string removeOccurence(string s, string part){
	while(s.length() !=0 && s.find(part)< s.length()){
		s.erase(s.find(part), part.size());
	}

	// int n = s.size();
	// int m = part.size();
	// int p = 0;
	// int i = 0;
	// //cout << i << endl;
	// while(i<n){
	// 	if(s[i]==part[p]){
	// 		i++;
	// 		p++;
	// 		if (p==m)
	// 		{
	// 			s.erase((s.begin()+i-m),(s.begin()+i));
	// 			n = n-m;
	// 			p = 0;
	// 			i = 0;
	// 		}
	// 	} 
	// 	else if( p == 0 && s[i]!= part[p]){
	// 		i++;
			
	// 	}

	// 	else if(p>0 && s[i]!= part[p]){
	// 		p = 0;
	// 	}
	// 	// cout << s << endl;
	// 	// cout << "Index i : " << i << " Index p : " << p << endl;  
		
	// }
	return s;
}

int main(){
	string s, part;
	cin >> s;
	cin >> part;
	int n = s.size();
	int m = s.size();

	cout << removeOccurence(s,part) << endl;
}