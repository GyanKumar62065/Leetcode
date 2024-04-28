class Solution {
public:
    vector<int>count;
    vector<int>res;
    vector<bool>vis;
    void dfs(int cur,int par,vector<vector<int>>&adj)
    {
        vis[cur]=true;
        for(auto i:adj[cur])
        {
            if(!vis[i])
            {
                res[i]=res[cur]-count[i]+(count.size()-count[i]);
                dfs(i,cur,adj);
            }
        }
    }
    void cnt(int cur,int par,vector<vector<int>>&adj)
    {
        vis[cur]=true;
        for(auto i:adj[cur])
        {
            if(!vis[i])
            {
                cnt(i,cur,adj);
                count[cur]+=count[i];
                res[cur]+=res[i]+count[i];
            }
        }
        count[cur]++;
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) 
    {

        vector<vector<int>>adj(n);
        res.resize(n,0);
        count.resize(n,0);
        vis.resize(n,false);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        cnt(0,-1,adj);
        vis.assign(n, false);
        dfs(0,-1,adj);
        return res;
    }
};