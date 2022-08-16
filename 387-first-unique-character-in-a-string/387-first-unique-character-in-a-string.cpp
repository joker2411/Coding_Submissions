class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        for(int j=0;j<s.size();j++)
        {
            if(arr[s[j]-'a']==1)
                return j;
        }
        return -1;
    }
};