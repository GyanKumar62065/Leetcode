class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        sort(points.begin() , points.end());

        int hold = points[0][1];
        int ans = 1;

        for(int i = 1;  i < points.size(); i++){

            int xs = points[i][0];
            int xe = points[i][1];

            if(xs <= hold){
                hold = min(hold , xe);
            }else{
          
                hold = xe;
                ans++;
            }

        }

        return ans;
        
    }
};