class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> m1;
        for(auto it : s)
            m1[it]++;
        
        multimap<int, char, greater<int>> m2;
        
        for(auto it : m1)
            m2.insert({it.second, it.first});
        
        string ans = "";
        
        for(auto it : m2)
        {
            for(int i=0; i<it.first; i++)
            {
                ans += it.second;
            }
        }
        
        return ans;
    }
};