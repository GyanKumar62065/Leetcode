class Solution {
public:

    // nCr =  n! / ((n!) * (n-r)!)
    

    int nCr(int n , int r){
        int res = 1;
        for(int i = 0; i < r; i++){
            res = res * (n-i);
            res = res / (i+1);
        }
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 1; i <= numRows; i++ ){
            vector<int>res;
            for(int j = 1; j<= i; j++){
                res.push_back(nCr(i-1 , j-1));
            }
            ans.push_back(res);
        }
        return ans;
    }
};