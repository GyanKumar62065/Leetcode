class Solution {
    string getBinaryString(int n) {
        string ans = "";
        while (n) {
            if ((n & 1) == 0) {
                ans += '0';
            } else {
                ans += '1';
            }
            n = n >> 1;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
        return ans;
    }

public:
    bool queryString(string s, int n) {
        for (int i = 0; i < 31; i++) { 
            if(n-i < 0) break;
            string str = getBinaryString(n - i);
            if (s.size() < str.size())
                return false;

            bool isPresentStr = false; 
            for (int j = 0; j <= s.size() - str.size(); j++) {
                bool isMatch = true;
                for (int k = 0; k < str.size(); k++) {
                    if (s[j + k] != str[k]) { 
                        isMatch = false;
                        break;
                    }
                }
                if (isMatch) {
                    isPresentStr = true; 
                    break;
                }
            }
            if (!isPresentStr)
                return false; 
        }
        return true;
    }
};