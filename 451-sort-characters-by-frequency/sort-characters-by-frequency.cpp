class Solution {
public:
    string frequencySort(string s) {

        map<char,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        vector<pair<char,int>>v;


        for(auto it : mp){
            v.push_back({it.first , it.second});
        }

        sort(v.begin() , v.end() , [](auto &a , auto &b){
            return a.second > b.second;
        });

        string ans = "";

        for(auto it : v){
            for(int i =0; i < it.second; i++)
                ans += it.first;
        }

        return ans;

        
        
    }
};