class Solution {
public:
    inline static int counts[100001];
    int minSetSize(vector<int>& arr) {
        memset(counts, 0, sizeof(counts));
        
        for (const int &i: arr) 
            ++counts[i];
        
        int freqs[size(arr) + 1];
        memset(freqs, 0, sizeof(freqs));
        
        for (int i = 1; i <= 100000; i++)
            if (counts[i])
                ++freqs[counts[i]];
        
        int n = (size(arr) + 1) / 2;
        int res = 0;
        
        for (int i = size(arr); n > 0; i--)
            while (freqs[i]-- and n > 0)
                n -= i, res++;
        
        return res;
    }
};