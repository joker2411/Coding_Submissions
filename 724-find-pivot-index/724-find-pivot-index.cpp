class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int N = nums.size();
        
        int sum;
        sum = accumulate(nums.begin(), nums.end(), 0);
        bool flag = false;
        
        int leftSum = 0, rightSum = sum, index;
        for(int i=0; i<N; i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                index = i;
                flag = true;
                break;
            }
            leftSum += nums[i];
        }
        if(flag == true)
            return index;
        else
            return -1;
    }
};