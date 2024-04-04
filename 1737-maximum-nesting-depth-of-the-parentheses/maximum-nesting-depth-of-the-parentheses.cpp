class Solution {
public:
    int maxDepth(string s) {

        int cnt = 0 , maxi = 0;
        for(auto it : s){
            if(it == '(') cnt++;
            maxi = max(cnt , maxi);
            if(it == ')') cnt--;
        }

        return maxi;
        
    }
};