class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) return false;
        double x = log((double)n)/log((double)3);
        double y = round(x);
        return (abs(x - y) < 1e-14);
   }
};