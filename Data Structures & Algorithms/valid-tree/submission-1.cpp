class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {

        if(edges.size() > n-1) return false;

        vector<vector<int>> adj(n);
        for(const auto& edge : edges){
            
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        unordered_set<int> visit;

        dfs(adj, visit, 0);

        return visit.size() == n;
    }

    void dfs(vector<vector<int>>& graph, unordered_set<int>& seen, int vertex) {
        
        seen.insert(vertex);

        for (int neighbor : graph[vertex]) {
            
            if (!seen.count(neighbor)) {
                dfs(graph, seen, neighbor);
            }
        }
    }
};
