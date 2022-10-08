#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>> n;
	int row = n,column = n;
	vector<vector<int>>arr(n,std::vector<int>(n));
	int p = 0;
	int count = 1;
	while(p<=min(row,column)/2){
		for (int i = p; i < column-p; ++i)
		{
			// if (arr.size()== row*column)
			// {
			// 	break;
			// }
			arr[p][i] = count++;
			cout << arr[p][i] << " ";
			
		}
		cout << endl;

		for (int i = p+1; i < row-1-p; ++i)
		{
			// if (arr.size()== row*column)
			// {
			// 	break;
			// }
			arr[i][column-1-p] = count++;
			cout << arr[i][column-1-p] << " ";
		}
		cout << endl;
		for (int i = column-1-p; i >p; --i)
		{
			// if (arr.size()== row*column)
			// {
			// 	break;
			// }
			arr[row-1-p][i]= count++;
			cout << arr[row-p-1][i] << " ";
		}
		cout << endl;
		for (int i = row-1-p; i >p; --i)
		{
			// if (arr.size()== row*column)
			// {
			// 	break;
			// }
			arr[i][p] = count++;
			cout << arr[i][p] << " ";
		}
		cout << endl;
		cout << "p : "<< p << endl;
		p++;
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}