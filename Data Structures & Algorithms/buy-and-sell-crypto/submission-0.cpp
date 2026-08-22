class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBeforeToday = INT_MAX, maxProfit = 0;
        for(int i=0; i<prices.size(); i++){
            maxProfit = max(maxProfit, prices[i]-minBeforeToday);
            minBeforeToday = min(minBeforeToday, prices[i]);
        }
        return maxProfit;
    }
};
