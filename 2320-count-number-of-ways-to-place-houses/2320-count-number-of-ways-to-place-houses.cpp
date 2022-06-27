class Solution {
public:
    int countHousePlacements(int n) {
        int ans=0;
        int first = 2, sec = 3;
        long long int curr;
        if(n == 1)
            return pow(first,2);
        if(n == 2)
            return pow(sec,2);
        for(int i=3; i <= n; i++){
            curr = (first+sec)%1000000007;
            first = sec;
            sec = curr;
        }
        long long int res;
        res = (curr*curr)%1000000007;
        return res;
    }
};