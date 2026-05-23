class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, ans = 0;
        int buyPrice = prices[0];
        for(i=0; i<prices.size()-1; i++){
            if(prices[i] <= prices[i+1]){
                continue;
            }else{
                ans += prices[i] - buyPrice;
                buyPrice = prices[i+1];
            }
        }
        if(prices[i] >= buyPrice){
            ans += prices[i] - buyPrice;
        }
        return ans;
    }
};