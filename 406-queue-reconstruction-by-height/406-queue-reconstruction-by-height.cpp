class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b){
        if(a[0] == b[0]){
            return a[1]<b[1];
        }
        return a[0] > b[0]; 
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), comparator);
        
        int N = people.size();
        vector<vector<int>> res;
        
        for(int i=0; i<N; i++){
            res.insert(res.begin()+people[i][1], people[i]);
        }
        return res;
    }
};