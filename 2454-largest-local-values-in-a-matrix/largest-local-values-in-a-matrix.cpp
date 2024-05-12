class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
     

        for(int i = 0; i < n-2; i++){
            for(int j = 0; j < n-2; j++){

                int temp = 0;
                for(int k = i; k < i + 3; k++){
                    for(int l = j; l < j+3; l++){
                        temp = max(temp , grid[k][l]);
                    }
                }
                grid[i][j] = temp;
            }
        }

        grid.resize(n-2);
        for(int i =0; i < grid.size(); i++) grid[i].resize(n-2);

        return grid;
        
    }
};