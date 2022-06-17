class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int num_row = matrix.size();
        int num_col = matrix[0].size();
        
        vector<int> rows(num_row, 0);
        vector<int> cols(num_col, 0);
        
        for(int i=0; i < num_row; i++)
        {
            for(int j=0; j<num_col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        
        for(int i=0; i < num_row; i++)
        {
            for(int j=0; j<num_col; j++)
            {
                if(rows[i] == 1 || cols[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};