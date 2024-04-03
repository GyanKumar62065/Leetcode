class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        for(int i =0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == word[0] && dfs(word , board , i , j , 0)){
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(string word , vector<vector<char>>& board , int i , int j , int s){

        if(i < 0 || j < 0 || i == board.size() || j == board[0].size()) return false;
        if(word[s] != board[i][j] || board[i][j] == '*') return false;
        if(s == word.size() - 1) return true;

        char cache = board[i][j];
        board[i][j] = '*';

        

        bool is_exist = dfs(word , board , i +1 , j , s + 1) ||
                        dfs(word , board , i -1 , j , s + 1) || 
                        dfs(word , board , i  , j+1 , s + 1) || 
                        dfs(word , board , i  , j-1 , s + 1) ;

        board[i][j] = cache;

        return is_exist;
    }
};