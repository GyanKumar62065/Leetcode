class Solution {
public:
// DFS
    // string getHappyString(int n, int &k, int i = 0, char last = 0) {
    //     if(i == n){
    //         k--;
    //     }else{
    //         for(char ch = 'a'; ch <= 'c'; ch++){
    //             if(ch != last){
    //                 string res = getHappyString(n , k, i+1, ch);
    //                 if(k == 0){
    //                     return string(1, ch) + res; // string of size 1 of charchter ch
    //                 }
    //             }
    //         }
    //     }
    //     return "";
    // }

    string getHappyString(int n, int k) {
      
        int perm = (1 << (n-1)); // pow(2 , n-1)
        if(k > 3 * perm) return "";

        string s = string(1, 'a' + (k-1)/ perm);

        while(perm > 1){
            k = (k-1) % perm + 1;
            perm >>= 1; 
            s += (k-1)/ perm == 0 ? 'a' + (s.back() =='a') : 'b' + (s.back() != 'c');
        }
        return s;
    }
};