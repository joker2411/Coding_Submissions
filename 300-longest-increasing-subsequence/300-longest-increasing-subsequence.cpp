class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        set<int> s;
        
        for(auto num:nums)
            s.insert(num);
        
        for(auto x:s)
            v.push_back(x);
        
        int N = nums.size();
        int M = v.size();
        
        int dp[N+1][M+1];
        
        for(int i=0; i<N+1; i++){
            for(int j=0; j<M+1; j++){
                if(i == 0|| j == 0){
                    dp[i][j] = 0;
                }
                else if(nums[i-1] == v[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[N][M];
    }
};