class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i < nums.size() && nums[i] <= 0 ){
            i++;
        }
        if(i < nums.size() && (nums[i] != 1) ) return 1;
        for(i; i < nums.size()-1; i++){
            int diff = nums[i+1]-nums[i];
            if(diff>1){
                return nums[i]+1;
            }
        }
        return nums.back() > 0 ? nums.back() + 1 : 1;
    }
};