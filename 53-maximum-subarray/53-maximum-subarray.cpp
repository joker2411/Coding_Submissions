class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum =0;
        long long max ;
        int size = nums.size();
        max = nums[0];
        
        for(int i=0; i<size; i++)
        {
            sum += nums[i];
            if(sum > max)
                max = sum;
            
            if(sum <= 0)
                sum=0;
        }
        return max;
    }
};