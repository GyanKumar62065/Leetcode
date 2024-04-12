class Solution {
public:
    int trap(vector<int>& height) {
        
//   arr =   [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
// leftMax = [0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3]
// rightMax =[   3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1]
// ans =     [0, 0, 1, 0, 1, 2, 1, 0, 0, 1, 0, 0]
// ans[0] = 0;
// ans[n-1] = 0;
// formula is = min(right[i] , left[i-1]) > (arr[i] ? ans[i] = arr[i] - min(right[i] , left[i-1]) ) : ans[i] = 0;



        int n = height.size() ;

        int ans = 0;
        vector<int>left(n, 0) , right(n , 0);

        left[0] = height[0];
        right[n-1] = height[n-1];

//      left preprocessing of array
        for(int i =1; i < n; i++){
            left[i] = max(left[i-1] , height[i]);
        }

//      right preprocessing of array

        for(int i = n-2; i >= 0; i--){
            right[i] = max(right[i+1] , height[i]);
        }


        for(int i =1; i < n-1; i++){
            int mini = min(right[i] , left[i-1]);
            if(mini > height[i]){
                ans += mini - height[i];
            }
        }

        return ans;
    }
};