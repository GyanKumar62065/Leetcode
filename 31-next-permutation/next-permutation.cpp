class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // step-1 lowest prefix match -> A[i] < A[i+1] // to find break point
        int idx = -1;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }
        // if there is no break proint just simply reverse and return array
        if(idx == -1){ 
            reverse(nums.begin() , nums.end());
            return ;
        }
        
        // find greater element than idx element (nums[idx] > ), but the smallest one so that stay closer to break point element
        for(int i = n-1; i > idx; i--){
            if(nums[i] > nums[idx]){
                swap(nums[i] , nums[idx]);
                break;
            }
        } 
        // Now reverse the remaing array after break point so keep it sorted in assending order
        reverse(nums.begin() + idx + 1 , nums.end());
        // return your ans
        return ;
    }
};