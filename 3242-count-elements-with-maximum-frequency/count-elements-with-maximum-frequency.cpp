class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }

        int maxSecond = 0;
        for(auto it : mp){
            maxSecond = max(maxSecond , it.second);
        }

        int ans = 0;
        for(auto it : mp){
            if(it.second == maxSecond){
                ans += it.second;
            }
        }

        return ans;

    }
};