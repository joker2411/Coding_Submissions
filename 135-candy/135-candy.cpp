class Solution {
public:
    int candy(vector<int>& ratings) {
        int N = ratings.size();
        
        vector<int> candy(N, 1);
        
        for(int i=1; i<N; i++){
            if(ratings[i] > ratings[i-1] && candy[i] <= candy[i-1]){
                candy[i] = candy[i-1] + 1;
            }
        }
        
        for(int i = N-2; i>=0; i--){
            if(ratings[i] > ratings[i+1] && candy[i] <= candy[i+1]){
                candy[i] = candy[i+1]+1;
            }
        }
        
//         for(auto x:candy)
//             cout<<x<<"--";
        
        int res = 0;
        for(auto x:candy){
            res = res+x;
        }
        
        return res;
    }
};