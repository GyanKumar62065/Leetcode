class Solution {
public:
    bool isPowerOfFour(int n) {
        int store = n;
        int zeros = 0;
        while(n > 0){
            if(n & 1){
               break;
            }
            zeros++;
            n = n >> 1;
        }
        int temp = 1;
        if((zeros & 1) == 0){
            temp = 1 << zeros;
        }
        return temp == store;
    }
};