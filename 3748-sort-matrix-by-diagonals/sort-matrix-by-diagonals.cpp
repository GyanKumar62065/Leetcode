class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 1)
            return grid;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int idx_diff = i - j;
                mp[idx_diff].push_back(grid[i][j]);
            }
        }

        for(auto it : mp){
            vector<int>temp = it.second;
            if(it.first < 0){
                sort(temp.begin(),temp.end());
            }else{
                sort(temp.begin(),temp.end(), greater<int>());
            }
            mp[it.first] = temp;
        }

        for (int i = n-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                int idx_diff = i - j;
                grid[i][j] = mp[idx_diff].back();
                mp[idx_diff].pop_back();
            }
        }
        return grid;
    }
};