class Solution {
public:
    int minimumLength(string s) {
        int l = 0 , r = s.size() -1;
        int mini = s.size() ;

        while(l < r){
            if(s[l] == s[r]){
                while((l+1) < r && s[l] == s[l+1]){
                    l++;
                }
                while((r-1) > l && s[r] == s[r-1]){
                    r--;
                }
                l++;
                r--;
            }else{
                break;
            }

            mini = min(mini , r-l +1);

        }

        return mini;
    }
};