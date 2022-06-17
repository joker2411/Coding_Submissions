class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int num_row = matrix.size();
        int num_col = matrix[0].size();
        
        bool row_flag = false;
        bool col_flag = false;
        
        for(int j = 0; j<num_col; j++)
        {
            if(matrix[0][j] == 0)
            {
                row_flag = true;
            }
        }
        
        for(int i = 0; i<num_row; i++)
        {
            if(matrix[i][0] == 0)
            {
                col_flag = true;
            }
        }
        
        for(int i=0; i < num_row; i++)
        {
            for(int j=0; j<num_col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        for(int i = num_row-1; i > 0 ; i--)
        {
            for(int j = num_col-1; j > 0; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(row_flag)
        {
            for(int k = 0; k<num_col; k++)
            {
                matrix[0][k] = 0;
            }
        }
        
        if(col_flag)
        {
            for(int k = 0; k<num_row; k++)
            {
                matrix[k][0] = 0;
            }
        }
    }
};