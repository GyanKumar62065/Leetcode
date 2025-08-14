class Solution {
public:
    string largestOddNumber(string s) {
        string ans = "";
        for(int i = s.size() - 1; i >= 0; i--){
            if((s[i] - '0') & 1){
                ans = s.substr(0 , i+1);
                break;
            }
        }
        return ans;
    }
};