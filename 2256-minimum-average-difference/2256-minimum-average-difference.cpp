class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        //prefix and suffix array concept
        int n = nums.size();
        int pre[n],suff[n];
        unsigned long long int s = 0;

        for(int i = 0; i<n ;i++){
            s+=nums[i];
            pre[i] = s/(i+1);
        }

        s = nums[n-1];
        suff[n-1] = 0;
        for(int i = n-2; i>=0; i--){
            suff[i] = s/(n-i-1);
            s+=nums[i];
        }

        int ans = INT_MAX;
        int curr;
        int idx = -1;
        for(int i = 0 ;i<n; i++){
            curr = abs(pre[i]-suff[i]);
            if(curr<ans){
                ans = curr;
                idx = i;
            }
        }
        return idx;
        
    }
};