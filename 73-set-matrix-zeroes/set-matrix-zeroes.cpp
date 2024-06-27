class Solution {
public:

     
    void markrow(int i , vector<vector<int>>& matrix){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }

    }

    void markcol(int j , vector<vector<int>>& matrix){
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }


    void setZeroes(vector<vector<int>>& matrix) {

        // Brute Force
        // for(int i =0; i < matrix.size(); i++){
        //     for(int j =0; j < matrix[0].size(); j++){
        //         if(matrix[i][j] == 0){

        //             markrow(i , matrix); // -1;
        //             markcol(j , matrix); // -1;
        //         }
        //     }
        // }

        // for(int i =0; i < matrix.size(); i++){
        //     for(int j =0; j < matrix[0].size(); j++){
        //         if(matrix[i][j] == -1){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }


        // Batter Solution

        // vector<int>row(matrix.size() , 0) , col(matrix[0].size() , 0);
        // int n = matrix.size() ; 
        // int m = matrix[0].size();
        // for(int i = 0; i < n; i++){
        //     for(int j =0; j < m; j++){
        //         if(matrix[i][j] == 0){
        //             row[i] = 1;
        //             col[j] = 1;
        //         }
        //     }
        // }

        // for(int i =0; i < n; i++){
        //     if(row[i] == 1){
        //         for(int j = 0; j < m; j++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        
        // for(int j =0; j < m; j++){
        //     if(col[j] == 1){
        //         for(int i = 0; i < n; i++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // Optimal Solution

        int col0 = 1;
        int n = matrix.size() , m = matrix[0].size();

        for(int i =0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j != 0) matrix[0][j] = 0;
                    else col0 = 0;
                }
            }
        }

        for(int i =1; i < n; i++){
            for(int j =1; j < m; j++){
                if(matrix[i][j] != 0){
                    if(matrix[0][j] == 0 || matrix[i][0] == 0)
                        matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int j =0; j < m; j++){
                matrix[0][j] = 0;
            }
        }
        if(col0 == 0){
            for(int i =0; i < n; i++){
                matrix[i][0] = 0;
            }
        }

    }
};