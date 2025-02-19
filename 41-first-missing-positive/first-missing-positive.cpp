class Solution {
public:
    // int firstMissingPositive(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int i=0;
    //     while(i < nums.size() && nums[i] <= 0 ){
    //         i++;
    //     }
    //     if(i < nums.size() && (nums[i] != 1) ) return 1;
    //     for(i; i < nums.size()-1; i++){
    //         int diff = nums[i+1]-nums[i];
    //         if(diff>1){
    //             return nums[i]+1;
    //         }
    //     }
    //     return nums.back() > 0 ? nums.back() + 1 : 1;
    // }

    int firstMissingPositive(vector<int>& nums) {
        set<int>st;
        for(auto it : nums){
            if(it > 0){
                st.insert(it);
            }
        }
        vector<int>temp;
        for(auto it : st){
            temp.push_back(it);
        }

        if(temp.empty() || temp[0] > 1) return 1;
        int ans = temp[0];
        for(int i = 0; i < temp.size()-1;i++){
            if(temp[i+1] - temp[i] > 1){
                ans = temp[i]+1;
                break;
            }
        }
        if(ans == temp[0]) ans = temp.back() + 1;
        return ans;
    }
};