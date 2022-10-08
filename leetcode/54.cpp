#include <bits/stdc++.h>
using namespace std;

int main(){
	int row, column;
	cin >> row >> column;
	vector<vector<int>>arr(row,std::vector<int> (column));
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	std::vector<int> v;
	int p = 0;
	while(p<=min(row,column)/2){
		for (int i = p; i < column-p; ++i)
		{
			if (v.size()== row*column)
			{
				break;
			}
			v.push_back(arr[p][i]);
			cout << arr[p][i] << endl;
			
		}

		for (int i = p+1; i < row-1-p; ++i)
		{
			if (v.size()== row*column)
			{
				break;
			}
			v.push_back(arr[i][column-1-p]);
			cout << arr[i][column-1-p] << endl;;
		}
		for (int i = column-1-p; i >p; --i)
		{
				if (v.size()== row*column)
				{
					break;
				}
			v.push_back(arr[row-1-p][i]);
			cout << arr[row-p-1][i] << endl;
		}
		for (int i = row-1-p; i >p; --i)
		{
			if (v.size()== row*column)
			{
				break;
			}
			v.push_back(arr[i][p]);
			cout << arr[i][p] << endl;
		}
		cout << "p : "<< p << endl;
		p++;
	}

	for (int i = 0; i < row*column; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

}