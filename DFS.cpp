# DFS-of-Graph
Given a connected undirected graph containing V vertices represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Search (DFS) traversal starting from vertex 

code::::::---->>>>

class Solution {
    
   public:
    void solve(int node,vector<vector<int>>& adj,vector<int> &vis,vector<int> &ans){
        vis[node]=1;
        ans.push_back(node);
        for(auto &it: adj[node]){
            if(!vis[it]){
                solve(it,adj,vis,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
    
        int n=adj.size();
        vector<int> vis(n,0);
        vector<int> ans;
        int start=0;
        solve(start,adj,vis,ans);
        return ans;
    }
};
