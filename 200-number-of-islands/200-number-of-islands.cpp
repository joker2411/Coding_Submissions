class Solution {
public:
    void DFS(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int M, int N){
        if(i<0 || i>=M || j<0 || j>=N || grid[i][j] == '0' || visited[i][j] == true)
            return;
        
        visited[i][j] = true;
        
        DFS(grid, visited, i+1, j, M, N);
        DFS(grid, visited, i-1, j, M, N);
        DFS(grid, visited, i, j+1, M, N);
        DFS(grid, visited, i, j-1, M, N);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int M = grid.size();
        int N = grid[0].size();
        
        vector<vector<bool>> visited(M, vector<bool>(N, false));
        
        int ans = 0;
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(visited[i][j] == true)
                    continue;
                
                if(grid[i][j] == '1'){
                    DFS(grid, visited, i, j, M, N);
                    ans++;
                }
            }
        }
        return ans;
    }
};