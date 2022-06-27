class Solution {
public:
    int minPartitions(string n) {
        int size = n.size();
        int max = n[0];
        
        for(auto x:n){
            if(x > max)
                max = x;
        }
        return max-48;
    }
};