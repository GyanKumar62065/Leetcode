class Solution {
private: 
    bool isPalndromeString(string &str){
        int l =0 , r = str.size() - 1;

        while( l <= r){
            if(str[l++] != str[r--]) return false;
        }
        return true;
    }

public:

    string firstPalindrome(vector<string>& words) {
        for(auto it : words){
            if(isPalndromeString(it)){
                return it;
            }
        }
        return "";
    }
};