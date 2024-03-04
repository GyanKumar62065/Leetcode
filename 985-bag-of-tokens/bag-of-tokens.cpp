class Solution {
public:
    
    int bagOfTokensScore(vector<int>& tokens, int p) {
        
        int i =0, j = tokens.size() - 1;
        
        int score = 0 , max_score = 0;
        
        sort(tokens.begin() , tokens.end());
        
        while(i <= j)
        {
            if(tokens[i] <= p )
            {
                p = p - tokens[i];
                i++;
                score++;
            }
            else if(score >= 1)
            {
                p = p + tokens[j];
                j--;
                score--;
            }
            else
            {
                i++;
            }
            
            max_score = max(max_score, score);
        }
        
        return max_score;
        
    }
};