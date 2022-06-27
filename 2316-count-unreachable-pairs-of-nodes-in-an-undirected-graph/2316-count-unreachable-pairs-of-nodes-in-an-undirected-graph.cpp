class Solution {
public:
    
    int DFS(int v, vector<int>& vis, vector<vector<int>>& li){
        if(vis[v] == 1)
            return 0;
        
        vis[v] = 1;
        
        vector<int>::iterator i;
        int sum=0;
        for(i = li[v].begin(); i != li[v].end(); i++)
        {
            if(vis[*i] == 0)
                sum = sum+ 1+DFS(*i, vis, li);
        }
        return sum;
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> G(n);
        
        for(auto x:edges){
            G[x[0]].push_back(x[1]);
            G[x[1]].push_back(x[0]);
        }
        
        vector<int> visited(n,0);
        vector<int> comp;
        int temp;
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                temp = DFS(i, visited, G);
                comp.push_back(temp+1);
            }
        }
        
        long long sum=0;
        for(auto i:comp)
        {
            sum+=i;
        }
        long long int res=0;
        for(int i=0;i<comp.size()-1;i++)
        {
            sum-=comp[i];
            res+=comp[i]*sum;
        }
        if(res == 1)
            return 0;
        return res;
    }
};