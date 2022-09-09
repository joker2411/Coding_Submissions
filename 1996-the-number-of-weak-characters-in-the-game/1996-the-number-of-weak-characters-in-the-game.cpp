class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        sort(pro.begin(), pro.end(), [](vector<int> &a, vector<int> &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int n = pro.size(), maxdef = INT_MIN, ans = 0;
        for (int i = n - 1; i >= 0; -- i) {
            if (maxdef > pro[i][1]) ++ ans;
            maxdef = max(maxdef, pro[i][1]);
        }
        return ans;
    }
};