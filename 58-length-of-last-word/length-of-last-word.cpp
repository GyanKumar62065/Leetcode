class Solution {
public:
    int lengthOfLastWord(string s) {

        bool flag = false;
        int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' ' && i == s.size()-1){
                int j = i;
                while(s[j] == ' '){
                    j--;
                }
                i = j;
            }
            
            if(s[i] == ' '){
                break;
            }
            ans++;
        }
        return ans;
        
    }
};