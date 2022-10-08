#include <bits/stdc++.h>
using namespace std;

bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
    
    return 0;
}

    
char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


// bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;       
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
// return 1;
// }


// bool isPalindrome(string s) {
        
//     //faltu character hatado
//     string temp = "";
    
//     for(int j=0; j<s.length(); j++) {   
//         if(valid(s[j])) {
//             temp.push_back(s[j]);
//         }
//     }
    
//     //lowercase me kardo
//     for(int j=0; j<temp.length(); j++) { 
//         temp[j] = toLowerCase(temp[j]);
//     }
//     cout << temp << endl;
//     //check palindrome
//     return checkPalindrome(temp);
        
// }


bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length()-1;
    while(start<=end){
        if(!valid(s[start])){
            start++;    //this function will return true if the char is valid and we negate that and make it false so as to make it proceed till last if case
            //if it returns false we negate and make it true coz that marks special characters encountered so just move over them
        }
        else if(!valid(s[end])){
            end--;  //same logic as above
        }
        else{
            //here real inplace comparisons happens
            if(toLowerCase(s[start])!=toLowerCase(s[end])){
                return false;   //it'l return false if the corresponding extremeties do not match, so break and return false, else if they match check till inside
            }
            else{
                //extremeties matched => move inside
                start++;
                end--;
            }
        }
    }
    return true;    //after checking till interior of every elements
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans;
    //string ans = "YES";
    // for (int i = 0; i < n/2; ++i)
    // {
    //     if (s[i]!=s[n-i-1])
    //     {
    //         ans = "NO";
    //         break;
    //     }
    // }
    ans = checkPalindrome(s);
    cout << ans << endl;
}