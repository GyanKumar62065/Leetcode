class Solution {
public:
    string getHappyString(int n, int &k, int i = 0, char last = 0) {
        if(i == n){
            k--;
        }else{
            for(char ch = 'a'; ch <= 'c'; ch++){
                if(ch != last){
                    string res = getHappyString(n , k, i+1, ch);
                    if(k == 0){
                        return string(1, ch) + res; // string of size 1 of charchter ch
                    }
                }
            }
        }
        return "";

    }
};