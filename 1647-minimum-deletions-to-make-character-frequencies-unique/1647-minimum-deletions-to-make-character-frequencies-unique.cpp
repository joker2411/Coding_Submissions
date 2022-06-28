class Solution {
public:
    int minDeletions(string s) {
        int number = 0;
        int N = s.size();
        vector<int> v(26, 0);
        
        for(auto x:s){
            v[x-'a']++;
        }
        int maxi = 0;
        for(auto x:v){
            if(x > maxi)
                maxi = x;
        }
        
        vector<int> count(maxi+1, 0);
        for(auto x:v){
            if(count[x] == 0)
                count[x] = 1;
            else{
                int j=x;
                while(count[j] == 1 && j > 0){
                    j--;
                    number++;
                }
                count[j] = 1;
            }
        }
        return number;
    }
};