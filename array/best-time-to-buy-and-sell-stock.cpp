class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int buy = prices[0];

        int n = prices.size();
        for(int i = 1; i< n ; i++){
            if(prices[i] < buy){
                buy = prices[i];

            }
            else if ( prices[i] - buy > maxprofit){
                maxprofit = prices[i] - buy;
            }
        }

        return maxprofit;

        
    }
};