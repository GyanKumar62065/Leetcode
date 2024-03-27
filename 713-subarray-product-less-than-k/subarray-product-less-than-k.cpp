class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k <= 1){
            return 0;
        }

        int ans = 0;
        unordered_map<int,int>mp;

        long long int curr = 1;
        int cnt = 0;

        int j = 0;
      
        for(int i =0; i < nums.size(); i++){

            curr *= nums[i];
            cnt++;

            while(curr >= k && j < nums.size()){
                curr /= nums[j];
                j++;
                cnt--;
            }
            ans += cnt;
        }
        return ans;
    }
};