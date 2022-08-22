class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        double num = log10(n)/log10(4);
        if(num == floor(num))
            return true;
        return false;
    }
};