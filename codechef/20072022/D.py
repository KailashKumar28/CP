#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--){
      int n;
      cin >> n;
      int arr[n];
      for (int i=0;i<n;i++){
          cin >> arr[i];
      }
      sort(arr , arr+n);
      int bkpt=0;
      int count=0;
      for (int i=0;i<n;i++){
          if (arr[i] >= i-bkpt+1){
              continue;
          }
          else {
              count++;
              bkpt = i;
          }
      }
      cout << count+1 << endl;
  }
  return 0;
}