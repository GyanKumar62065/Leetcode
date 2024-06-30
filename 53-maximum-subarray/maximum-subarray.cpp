class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Since it containing negative element 
        // step -1 iterate through entier array find maximum check wheather it is -ve or zero return the maximum other wise go through kadane's algo

        int maxi = INT_MIN;
        for(auto it : nums) maxi = max(maxi , it);
        if(maxi <= 0) return maxi;
        maxi = INT_MIN;
        int currsum = 0;
        for(int i =0; i < nums.size(); i++){
            currsum += nums[i];
            if(currsum < 0){
                currsum = 0;
            }
            maxi = max(currsum , maxi);
        }
        return maxi;
    }
};