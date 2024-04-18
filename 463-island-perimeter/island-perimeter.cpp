class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        vector<vector<int>>dir = {{0,1} , {0, -1} , {1,0} , {-1,0}};
        queue<pair<int,int>>q;
        for(auto i =0; i < grid.size(); ++i){
            for(int j =0; j < grid[0].size(); ++j){
                if(grid[i][j] == 1){
                    q.push({i,j});
                }
            }
        }
        int ans =0;
        while(!q.empty()){
            int x = q.front().first , y = q.front().second;
            q.pop();
            for(auto it : dir){
                int xn = it[0] + x , yn = it[1] + y;
                if(xn < 0 || yn < 0 || xn >= grid.size() || yn >= grid[0].size() || grid[xn][yn] == 0)ans++;

            }
        }

        return ans;
      
        
    }
};