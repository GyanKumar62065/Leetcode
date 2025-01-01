class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ans = events[0][0];
        int diff = events[0][1];
        for(auto i =1; i < events.size(); i++){
            int currDiff = events[i][1] -  events[i-1][1];
            if(diff < currDiff){
                diff = currDiff;
                // ans = min(ans , events[i][0]);
                ans = events[i][0];
            }else if(diff == currDiff){
                ans = min(ans , events[i][0]);
            }
        }
        return ans;
        
    }
};