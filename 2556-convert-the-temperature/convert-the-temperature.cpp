class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k = 273.15 + celsius;
        double f = (celsius * 9/5) + 32;
        vector<double>ans;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};