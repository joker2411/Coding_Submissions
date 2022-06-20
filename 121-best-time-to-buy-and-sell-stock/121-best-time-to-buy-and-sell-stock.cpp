class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size = prices.size();
        int dif=INT_MIN;
        
        int beg = prices[0];
        int max = INT_MIN;
        
        for(int i=0; i<size; i++)
        {
            if(beg > prices[i])
                beg = prices[i];
            if(prices[i]-beg > max)
                max = prices[i]-beg;
        }
        if(max < 0)
            max = 0;
        return max;
    }
};