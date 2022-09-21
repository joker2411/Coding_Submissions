class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long int evenSum = 0;
        for(auto x:nums){
            if(x%2 == 0)
                evenSum += x;
        }
        
        vector<int> ans;
        for(auto query:queries){
            int val = query[0];
            int ind = query[1];
            
            if(nums[ind]%2 == 0){
                evenSum -= nums[ind];
            }
            nums[ind] += val;
            if(nums[ind]%2 == 0)
                evenSum += nums[ind];
            
            ans.push_back(evenSum);
            
        }
        return ans;
    }
};