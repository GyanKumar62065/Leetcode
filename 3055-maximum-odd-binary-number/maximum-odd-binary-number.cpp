class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int onesCnt = 0;
        for(auto it : s) {
            if(it=='1') onesCnt++;
            }
        string ans = "";
        for(int i =0; i < s.size() - onesCnt; i++){
            ans = '0' + ans;
        }
        ans += '1';
        onesCnt--;
        while(onesCnt--) ans = '1' + ans;
      

  
        return ans;

        
    }
};