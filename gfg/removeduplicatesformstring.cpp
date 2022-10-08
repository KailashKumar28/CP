//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    // code here
	    string t="";
	    for(char ch:str){
	        //cout << ch << endl;
	       	string test = "";
	       	test = test + ch;
	       	//cout << test << endl;
	        //cout << t.find(test) << endl;
            if (t.find(test)>str.length()){
	            //cout << "repeating" << endl;
	            t = t + ch;
	            //cout << "output string is : " << t << endl;
	        }
	        // test.pop_back();
	    }
	    //cout << t << endl;
	    return t;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends