#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "ym eman si .hsaliak";
	int start = 0;
	int p = 0; 
	int n = s.size();
	for (int i = 0; i <= n; ++i)
	{
		if (s[i]==' ' || s[i] == '\0')
		{
			int end = i-1;
			while(start<end){
				swap(s[start],s[end]);
				start++;
				end--;
			}
			start = i+1;
		}
	}
	cout << s << endl;
}

// int main()
// {
//     string s = "ym eman si hsaliak";
//     int start = 0;
//     int p = 0;
//     for (int i = 0; i <= s.length(); i++)
//     {
//         if (s[i] == ' ' || s[i] == '\0')
//         {
//             int end = p - 1;
//             while (start <= end)
//             {
//                 swap(s[start],s[end]);
//                 start++;
//                 end--;
//             }
//             start=p+1;
//         }
//         p++;
//     }
//     cout<<s;
// }