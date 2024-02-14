class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp1 , temp2 , ans;
        for(auto it : nums){
            if(it < 0) temp1.push_back(it);
            else temp2.push_back(it);
        }

        if(temp1.size() > temp2.size()){
            for(int i =0; i < temp1.size(); i++){
                ans.push_back(temp1[i]);
                if(i < temp2.size())
                    ans.push_back(temp2[i]);
            }
        }else{
            for(int i =0; i < temp2.size(); i++){
                ans.push_back(temp2[i]);
                if(i < temp1.size())
                    ans.push_back(temp1[i]);
            }

        }
        return ans;
    }
};