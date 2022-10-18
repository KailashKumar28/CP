// #include <bits/stdc++.h>
// using namespace std;

// // int fact(int n);
// // int nCr(int n, int r)
// // {
// //     return fact(n) / (fact(r) * fact(n - r));
// // }
 
// // // Returns factorial of n
// // int fact(int n)
// // {
// //       if(n==0)
// //       return 1;
// //     int res = 1;
// //     for (int i = 2; i <= n; i++)
// //         res = res * i;
// //     return res;
// // }

// // int main(){
// // 	int N;
// // 	cin >> N;
// // 	int ans = 0;
// // 	for(int i = 0; i<= N; i++){
// // 		int temp = nCr(N,i)*(i+1);
// // 		cout << temp << endl;
// // 		ans += temp;
// // 	}
// // 	cout << ans << endl;
// // }

// int main(){
// 	string s;
// 	cin >> s;
// 	int x;
// 	cin >> x;
// 	vector<string> arr;
// 	for(int i = 0; i < x; i++){
// 		string temp;
// 		cin >> temp;
// 		arr.push_back(temp);
// 	}
// 	for(int i = 0; i < 10; i++){
// 		if(s[i]== 'F'){
// 			for(int j =0; j < x; j++){
// 				if(arr[j][i]== 1)
// 			}
// 		}
// 	}
	
// }
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find(int n,  vector<vector<vector<float>>>& world){
    float en1=world[n][0][0];
    
    float en2=world[n][0][1];
    vector<int> Possible_systems;       //here will be index of solar systems in which kandor people can live 
    for(int i = 0; i < n; i++){
        
        int ans = -1;
        int m = world[i].size();
        float energy = 0;                   // this will be the energy output for planet in a solar system
        for(int j = 0; j < m; j++){
            energy += world[i][j][0]/world[i][j][1];
        }
        if(energy >= en1 && energy <= en2){
            ans = i;
            Possible_systems.push_back(ans);
        }
    }
    
    
    // printing the results
    for(int i = 0; i < Possible_systems.size(); i++){
        cout << Possible_systems[i] << " " ;
    }cout << endl;
    return;
}

int main()
{
    int n = 2;
    vector<vector<vector<float>>> world =[[[0.433, 200]], [[0.89, 400], [0.6, 300]], [[0.003, 0.005]]];
    find(n, world);
    

    return 0;
}