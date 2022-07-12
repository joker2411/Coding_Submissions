class Solution {
public:
    static int comparator(int a, int b){
        return a+b;
    }
    
    int count(vector<int> mts, int sideL, vector<int> &sides, int idx){
        if(idx == mts.size()){
            if((sides[0] == sides[1])&&(sides[1] == sides[2])&& (sides[2] == sides[3]))
                return true;
            return false;
        }
        
        for(int i=0; i<4; i++){
            if(sides[i]+mts[idx] > sideL)
                continue;
            
            int j = i - 1;  //optimization - 3
            while (j>=0){
                if(sides[j] == sides[i]){
                    break;
                }
                
                j -= 1;
            }
            
            if(j != -1){
                continue;
            }
            
            sides[i] += mts[idx];
            if(count(mts, sideL, sides, idx+1))
                return true;
            sides[i] -= mts[idx];
        }
        return false;
    }
    
    bool makesquare(vector<int>& mts) {
        int N = mts.size();
        long long int sum = accumulate(mts.begin(), mts.end(), 0, comparator);
        
        if(sum%4 != 0)
            return false;
        
        int sideL = sum/4;
        
        sort(mts.begin(), mts.end(), greater<int>());
        if(mts[0] > sideL)
            return false;
        vector<int> sides(4,0);
        return count(mts, sideL, sides, 0);
    }
};