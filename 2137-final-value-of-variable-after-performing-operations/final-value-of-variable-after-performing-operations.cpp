class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {

        unordered_map<string,int>mp = {{"++X" , 1} , {"X++" ,  1} , {"--X" , -1} , {"X--" , -1}};
        int ans = 0;
        for(auto it : op){
            ans += mp[it];
        }

        return ans;
        
    }
};