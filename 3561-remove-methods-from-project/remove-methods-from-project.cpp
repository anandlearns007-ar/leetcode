class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;

        for (int v : adj[node]) {
            if (vis[v]) {
                continue;
            }
            dfs(v, adj, vis);
        }
    }
    vector<int> remainingMethods(int n, int k,
                                 vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);

        for (auto& it : invocations) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        vector<bool> vis(n, false);
        dfs(k, adj, vis);

        for (auto& it : invocations) {
            int u = it[0];
            int v = it[1];

            if (!vis[u] & vis[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++) {
                    ans.push_back(i);
                }
                return ans;
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};