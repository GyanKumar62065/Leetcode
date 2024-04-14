class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = -1;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] >= target){
                idx = i;
                return i;
            }
        }

        if(idx == -1){
            idx = nums.size();
        }

        return idx;
    }
};