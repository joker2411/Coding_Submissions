class Solution {
public:
    static bool comparator(int a, int b){
        return a<b;
    }
    
    int minMoves2(vector<int>& nums) {
        int N = nums.size();
        if(N == 1)
            return 0;
        if(N == 2)
            return abs(nums[1]-nums[0]);
        
        sort(nums.begin(), nums.end(), comparator);
        
        int mid, temp = N/2; 
        mid = nums[temp];
        int ans = 0;
        
        for(auto x:nums){
            ans = ans+ abs(x-mid);
        }
        return ans;
    }
};