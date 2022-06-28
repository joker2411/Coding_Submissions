class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int N = nums.size();
        sort(nums.begin(), nums.end());
        int res;
        
        for(int i=0; i<N-1; i++){
            if(nums[i] == nums[i+1]){
                res = nums[i];
                break;
            }
        }
        return res;
    }
};