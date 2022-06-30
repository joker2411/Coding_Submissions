class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int option1, option2;
        int maxProd, minProd, res;
        
        maxProd = nums[0];
        minProd = nums[0];
        res = nums[0];
        
        int N = nums.size();
        
        for(int i=1; i<N; i++){
            option1 = nums[i]*maxProd;
            option2 = nums[i]*minProd;
            
            maxProd = max(nums[i], max(option1, option2));
            minProd = min(nums[i], min(option1, option2));
            
            res = max(res, maxProd);
        }
        
        return res;
    }
};