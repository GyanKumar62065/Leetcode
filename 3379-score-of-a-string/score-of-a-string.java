class Solution {
    public int scoreOfString(String s) {

        // int ans = 0;
        // for(int i =0; i < s.length() - 1; i++){
        //     ans += Math.abs(s.charAt(i) - s.charAt(i+1));
        // }
        // return ans;

        return java.util.stream.IntStream.range(0 , s.length() - 1).map(i -> Math.abs(s.charAt(i) - s.charAt(i+1))).sum();
    }
}