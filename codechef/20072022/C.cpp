#include <bits/stdc++.h>
using namespace std;




// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;
// 		string s;
// 		cin >> s;

// 		for (int i = 0; i < n/2; ++i)
// 		{
// 			if (s[i]!=s[n-i-1] && s[i+1]==s[n-i-1])
// 			{
// 				s.erase(s.begin()+i);
// 			}
// 			else if(s[i]!=s[n-i-1] ){
// 				s.erase(s.begin()+n-i-1);
// 			}
// 		}
// 		cout << s << endl;


// 		// int startindex;
// 		// int endindex;
// 		// int maxLength = 1, start = 0;
//  	//    	for (int i = 0; i < s.length(); i++) {

// 	 //    	for (int j = i; j < s.length(); j++) {
// 	 //            int flag = 1;
	 
// 	 //            // Check palindrome
// 	 //            for (int k = 0; k < (j - i + 1) / 2; k++)
// 	 //                if (s[i + k] != s[j - k])
// 	 //                    flag = 0;
	 
// 	 //            // Palindrome
// 	 //            if (flag && (j - i + 1) > maxLength) {
// 	 //                start = i;
// 	 //                maxLength = j - i + 1;
// 	 //                startindex = i;
// 	 //                endindex = j;
// 	 //            }
// 	 //        }
//   //   	}
//   //   	string ans = "";
//   //   	for (int i = 0; i < maxLength; ++i)
//   //   	{
//   //   		ans = ans + s[i+startindex];
//   //   	}
// 		// cout << ans << endl;
// 	}
// }

// #include <bits/stdc++.h> 
// using namespace std; 
 
// void solve(){ 
//     int n; 
//     cin>>n; 
//     string s; 
//     cin>>s; 
//     int countzero = 0;
//     int countone = 0; 
//     for (int i = 0; i < n; i++){ 
//         if (s[i]=='0'){
//         	countzero++;
//         }
//         else{
//         	countone++;
//       	} 
//     } 
//     string ans; 
//     if (countone>countzero){ 
//         for (int i=0;i<countone;i++){ 
//             ans += '1'; 
//         } 
//     } 
//     else{ 
//         for (int i=0;i<countzero;i++){ 
//             ans += '0'; 
//         } 
//     } 
//     cout<<ans<<endl; 
 
 
// } 
 
// int main(){ 
//     int t; 
//     cin>>t; 
//     while(t--){ 
//   		solve(); 
//  	} 
// }


int main() {
 int t;
 cin>>t;
 while(t--){
     int n;
     string str2;
     cin>>n>>str2;
     string str1=str2;
     reverse(str2.begin(),str2.end());
     int n1=str1.length(),n2=str2.length();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i=n1,j=n2;
        string ans="";
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans=str1[i-1]+ans;
                i--;j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
               
                i=i-1;
            }
            else{
            
                j=j-1;
            }
        }
        cout<<ans<<endl;
 }
 return 0;
}