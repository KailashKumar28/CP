#include <bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}
	int nonzero = 0;
	for (int i = 0; i < n; ++i){
		if (nums[i]!=0)
		{
			swap(nums[i],nums[nonzero]);
			nonzero++;
			// cout << "swaping for nonzero :"<< nonzero << ", nums[nonzero]= " << nums[nonzero-1] << " and nums[i] = "<< nums[i]<< " => ";
			// for (int j = 0; j < n; ++j)
			// {
			// 	cout  << nums[j] << " ";
			// }
			// cout << endl;
		}
	
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << nums[i] << " ";
	// }
	// cout << endl;

}