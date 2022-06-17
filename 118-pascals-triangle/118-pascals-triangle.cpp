class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> v;
        
        if(numRows == 1)
        {
            v.push_back(vector<int> (1,1));
            return v;
        }
        
        else if(numRows == 2)
        {
            v.push_back(vector<int> (1,1));
            v.push_back(vector<int> (2,1));
            return v;
        }
        
        else
        {
            v.push_back(vector<int> (1,1));
            v.push_back(vector<int> (2,1));
            
            int row = 3;
            
            while(row <= numRows)
            {
                vector<int> temp;
                temp.push_back(1);
                for(int i=0; i< row-2; i++)
                {
                    temp.push_back(v[row-2][i] + v[row-2][i+1]);
                }
                temp.push_back(1);
                v.push_back(temp);
                row++;
            }
            return v;
        }
    }
};