class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {

        vector<int>v(n+1,0);
        vector<bool>flag(n+1,0);
        for(auto it : t){
            flag[it[0]] = 1;
            v[it[1]]++;
        }
        int ans = -1;
        for(auto i =1; i <= n; ++i){
            if(v[i] == n-1 && flag[i] == false) ans =  i;
        }
        return ans;
        
    }
};