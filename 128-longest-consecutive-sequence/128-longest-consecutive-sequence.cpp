class Solution {
public:
    int maximum(int a, int b){
        if(a >= b)
            return a;
        return b;
    }
    
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        unordered_map<int, bool> mp;
        int N = nums.size();
        
        for(int i=0; i<N; i++){
            st.insert(nums[i]);
            mp.insert(pair<int, bool>(nums[i], false));
        }
        
        int N1 = st.size();
        int ans=0;
        
        unordered_set<int> :: iterator it;
        for(it = st.begin(); it != st.end(); it++){
            if(mp[*it] == false){
                int temp = *it, max = *it;
                bool flag = true;
                int tempCount = 1;
                while(flag == true){
                    if(st.find(temp+1) == st.end()){
                        flag = false;
                    }
                    else{
                        max = temp+1;
                        temp = temp+1;
                    }
                }
                temp = max;
                while(flag == false && mp[temp] == false){
                    mp[temp] = true;

                    if(mp[temp-1] == false && st.find(temp-1) == st.end())
                    {
                        flag = true;
                    }
                    else{
                        tempCount++;
                        temp--;
                    }
                }

                ans = maximum(ans, tempCount);
            }
        }
        return ans;
    }
};