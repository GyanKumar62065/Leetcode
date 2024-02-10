class Solution {
public:
 int countSubstrings(string s) {
        int res = 0, n = s.length();
        for(int i = 0; i < n; i++){ 
            int j =0;
            while(i-j >= 0 && i+j < n && s[i-j] == s[i+j]){
                res++; 
                j++;
            }

            j = 0;
            while(i - 1 - j >= 0 && i + j < n && s[i-1-j] == s[i+j]){
                res++;
                j++;
            }
        }
        return res;
    }
};