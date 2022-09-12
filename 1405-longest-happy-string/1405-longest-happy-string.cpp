class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res = "";
        priority_queue<pair<int,char>>pq;
        if(a > 0)
        pq.push({a,'a'});
        if(b > 0)
        pq.push({b,'b'});
        if(c > 0)
        pq.push({c,'c'});
        
        while(pq.size() > 0)
        {
           auto first_val = pq.top(); pq.pop();
            
           if(first_val.first == 0) continue;
    
           if(res.size() < 2)
           {
               res += first_val.second;
               if(first_val.first - 1 > 0) pq.push({first_val.first - 1, first_val.second});
           }
            
           else
           {
               if(res[res.size() - 2] == first_val.second && res[res.size() - 1] == first_val.second)
               {
                   if(pq.size() == 0) break;
                   
                   auto second_val = pq.top(); pq.pop();
                   
                   res += second_val.second;
                   
                   if(second_val.first - 1 > 0) pq.push({second_val.first - 1, second_val.second});
                   pq.push(first_val);
               }
               else
               {
                   res += first_val.second;
                   if(first_val.first - 1 > 0) pq.push({first_val.first - 1, first_val.second});
               }
           }
        }
        
        return res;
    }
};