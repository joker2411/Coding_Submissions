class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int lastIndex = 0;
		for (int i = 0; i < nums.size(); i++){
			if (nums[lastIndex] < nums[i]){
				swap(nums[++lastIndex], nums[i]);
			}
		}

		return lastIndex+1;
	}
};