#include <bits/stdc++.h>
using namespace std;





void merge (vector< int > & arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e - mid;
    cout << "s is : " << s << " e is : " << e << " mid : "<< mid <<  endl;

    
    int *first = new int[len1];
    int *second = new int[len2];
    
    // copying data in both parts
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++]; 
    }
    for(int i = 0; i< len2; i++){
        second[i] = arr[k++];
    }
    
    cout << "first : ";
    for (int i = 0; i < len1; ++i)
    {
        cout << first[i] << " ";
    }cout << endl;

    cout << "second : ";
    for (int i = 0; i < len2; ++i)
    {
        cout << second[i] << " ";
    }cout << endl;  


    // merge both sorted parts
    int p = s;
    int i = 0;
    int j = 0;
    while(i< len1 && j < len2){
        if(first[i]< second[j]){
            arr[p++] = first[i];
            i++;
        }
        else{
            arr[p++] = second[j];
            j++;
        }
        cout << "i : " << i << " j : " << j << endl;
    }
    while(i< len1){
        arr[p++] = first[i];
        i++;
    }
    while(j< len2){
        arr[p++] = second[j];
        j++;
    }
    cout << "i : " << i << " j : " << j << endl;
    cout << first[0] << endl;
    cout << "length of first : " << len1 << endl;
    cout << "length of second : " << len2 << endl;
    cout << "merged first+second : ";
    for (int i = 0; i <= e; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;
    delete []first;
    delete []second;
  
}



void solve(vector < int > & arr, int s, int e){
    cout << "s is : " << s << " e is : " << e <<  endl;

    if(s>=e){
        cout << "s is equal to e" << endl;
        return;
    }
    cout << " left part : ";
    for (int i = 0; i <=e; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;
    int mid = s + (e-s)/2;

    //left part solve
    solve(arr, s, mid);
    // right part solve
 
    solve(arr, mid+1, e);
    cout << "right part : ";
    for (int i = 0; i <=e; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;

    // merge two sorted parts
    merge(arr, s, e);
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    cout << "mergeSort arr print : ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;
    solve(arr,0,n-1);
}


int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;

    mergeSort(arr,n);

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;
}