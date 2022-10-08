#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int m;
	cin >> m;
	std::vector<int> a(n);
	std::vector<int> b(m);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	int A = 0;
    int B = 0;
    for(int i = 0 ; i < n; i++){
        A =  A + a[i]*pow(10,(n-i-1));
    }
    cout << A << endl;

    for (int i = 0; i < m ; i++){
        B = B + b[i]*pow(10,(m-i-1));    
    }
    
    int ans = A + B;
    int N = (log10(ans)) + 1;
    vector<int>answer(N);
    for(int i = 0; i < N;i++){
        answer[N-i-1] = ans%10;
        ans = ans/10;
    }

    for (int i = 0; i < N; ++i)
    {
    	cout << answer[i] << " ";
    }
    cout << endl;
}