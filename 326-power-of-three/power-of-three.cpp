class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n ==1) return true;
        if(n <= 2) return false;
        while(n > 2){
            if(n % 3 != 0) return false;
            n /= 3;
        }
        
        return n == 1;
    }
};