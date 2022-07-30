#include <iostream>
#include <vector>

using namespace std;

int BinarySearchRight(vector<int>& nums, int target){
	if (nums.empty()) return -1;
	
	int l = 0;
	int r = nums.size();
	while (l + 1 < r){
		int m = l + (r - l) / 2;
		if (nums[m] > target) {
			r = m;
		}
		else {
			l = m;
		}
	}

	return nums[l] == target ? l : -1;

}

//int BinarySearchLeft(vector<int>& nums, int target) {
//	if (nums.empty()) return -1;
//
//	int l = -1;
//	int r = nums.size() - 1;
//	while (l + 1 < r) {
//		int m = l + (r - l) / 2;
//		if (nums[m] < target) {
//			l = m;
//		}
//		else {
//			r = m;
//		}
//	}
//
//	return nums[l] == target ? l : -1;
//}



int main()
{
	vector<int> nums = { 0, 3, 5, 7, 9, 11, 13, 15 };

	cout<<BinarySearchRight(nums, 0)+1<<endl;
	/*cout << BinarySearchLeft(nums, 7) << endl;*/

}


