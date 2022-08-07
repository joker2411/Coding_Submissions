class Solution {
public:
    static bool comparator(pair<int, int> a, pair<int, int> b){
        return a.first < b.first;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        int i = 0, j = N-1;
        
        vector<pair<int, int>> vecpair;
        for(int k=0; k<N; k++){
            vecpair.push_back(make_pair(nums[k], k));
        }
        
        sort(vecpair.begin(), vecpair.end(), comparator);
        
        while(i<j){
            if((vecpair[i].first + vecpair[j].first) == target )
                break;
            else if((vecpair[i].first + vecpair[j].first) > target)
                j--;
            else
                i++;
        }
        
        vector<int> ans;
        ans.push_back(vecpair[i].second);
        ans.push_back(vecpair[j].second);
        return ans;
    }
};