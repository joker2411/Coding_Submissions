class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b){
        if(a[1] == b[1])
            return a[0] > b[0];
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comparator);
        // for(auto x:boxTypes)
        //     cout<<x[0]<<" "<<x[1]<<endl;
        
        int N = boxTypes.size();
        
        int temp = 0;
        int i=0;
        int ans = 0;
        
        while(temp < truckSize && i<N){
            int limit = min(boxTypes[i][0], truckSize-temp);
            ans += limit*boxTypes[i][1];
            temp += limit;
            i++;
        }
        
        return ans;
    }
};