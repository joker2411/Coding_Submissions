// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
   vector<vector<int>> ans;
   void dfs(int i,int j,vector<vector<int>> &grid,vector<int> temp){
       if(i>=grid.size() || j>=grid[0].size()){
           return ;
       }
       int t = grid[i][j];
       temp.push_back(t);
       if(grid[i][j]==grid[grid.size()-1][grid[0].size()-1]){
           ans.push_back(temp);
           
       }
       dfs(i+1,j,grid,temp);
       dfs(i,j+1,grid,temp);
       
       return ;
       
   }
   vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
   {
       // code here
       vector<int> temp;
       dfs(0,0,grid,temp);
       return ans;
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends