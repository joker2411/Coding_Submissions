class Solution {
public:
    void sortDigonal(vector<vector<int>>& mat, int r, int c, int M, int N){
        vector<int> v;
        int i=r, j=c;
        while(i < M && j < N){
            v.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(v.begin(), v.end());
        i=r, j=c;
        for(auto x:v){
            mat[i][j] = x;
            i++;
            j++;
        }
        return;
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int M = mat.size();
        int N = mat[0].size();
        
        for(int i=0; i<N; i++){
            sortDigonal(mat, 0, i, M, N);
        }
        for(int i=1; i<M; i++){
            sortDigonal(mat, i, 0, M, N);
        }
        return mat;
    }
};