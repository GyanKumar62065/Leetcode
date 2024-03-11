class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char,int>mp;

        for(auto it : s){
            mp[it]++;
        }
        
        string ans = "";

        for(auto it : order){
            if(mp.find(it) != mp.end()){
                int sz = mp[it];
                while(sz--){
                    ans += it;
                }
                mp[it] = -1;
            }
        }

        for(auto it : mp){
            
            if(it.second != -1) {
                while(it.second--){
                    ans += it.first;
                }
            }
        }
        return ans;
    }
};