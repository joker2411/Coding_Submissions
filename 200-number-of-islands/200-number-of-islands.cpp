class Solution {
public:
    bool checkCordinates(int x, int y, int N, int M){
        if((x>=0 && x<N) && (y>=0 && y<M))
            return true;
        return false;
    }
    
    void visitIslandwithDFS(vector<vector<char>>& grid, vector<vector<bool>>& visited, int N, int M, int i, int j){
        visited[i][j] = true;
        
        if(checkCordinates(i-1,j, N, M) && visited[i-1][j] == false && grid[i-1][j] == '1')
            visitIslandwithDFS(grid, visited, N, M, i-1, j);
        if(checkCordinates(i+1,j, N, M) && visited[i+1][j] == false && grid[i+1][j] == '1')
            visitIslandwithDFS(grid, visited, N, M, i+1, j);
        if(checkCordinates(i,j-1, N, M) && visited[i][j-1] == false && grid[i][j-1] == '1')
            visitIslandwithDFS(grid, visited, N, M, i, j-1);
        if(checkCordinates(i,j+1, N, M) && grid[i][j+1] == '1')
            visitIslandwithDFS(grid, visited, N, M, i, j+1);
    }
    
    int checkIslands(vector<vector<char>>& grid){
        int N = grid.size();
        int M = grid[0].size();
        
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        
        int ans = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(visited[i][j] == true)
                    continue;
                else if(grid[i][j] == '1'){
                    visitIslandwithDFS(grid, visited, N, M, i, j);
                    ans++;
                }
                else
                    visited[i][j] = true;
            }
        }
        return ans;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        return checkIslands(grid);
    }
};