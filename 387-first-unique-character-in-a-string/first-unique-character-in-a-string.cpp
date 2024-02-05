class Solution {
public:
    int firstUniqChar(string s) {
        int ch[26] = {0};
        for(auto it : s){
            ch[it - 'a']++;
        }
        for(int i =0; i < s.size(); ++i){
            if(ch[s[i]-'a'] == 1) return i;
        }
        return -1;
        
    }
};