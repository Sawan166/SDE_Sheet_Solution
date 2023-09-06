public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i, vector<int>adj[], int vis[], vector<int>&ans){
        vis[i]=1;
        ans.push_back(i);
        for(auto it: adj[i]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
        }
    }
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        int i=0;
        vector<int> ans;
        dfs(i,adj,vis,ans);
        return ans;
    }
