class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero = 0, cnt = 1;
        int ans = 0;
        int j = 0;
        int i =0;
        for( i =0; i < nums.size(); i++){
            if(nums[i] == 0) zero++;

            while(zero > 1 && j < i){
                ans = max(ans , i - j-1);
                if(nums[j] == 0){
                    zero--;
                }
                j++;
            }
        }
        ans = max(ans , i - j-1);
        return ans;
    }
};