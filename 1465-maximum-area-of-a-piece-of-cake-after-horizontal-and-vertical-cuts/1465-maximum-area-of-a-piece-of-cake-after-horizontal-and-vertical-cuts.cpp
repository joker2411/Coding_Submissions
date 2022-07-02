class Solution {
public:
    int diff(vector<int> v, int n){
        v.push_back(n);
        sort(v.begin(), v.end());
        
        int N = v.size();
        int max = v[0];
        
        for(int i=1; i<N; i++){
            int temp;
            temp = v[i] - v[i-1];
            if(max < temp)
                max = temp;
        }
        return max;
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long int max1, max2, res;
        max1 = diff(horizontalCuts, h);
        max2 = diff(verticalCuts, w);
        // cout<<max1<<"--"<<max2;
        res = (max1*max2)%1000000007;
        return res;
    }
};