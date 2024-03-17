class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int maxprofit = 0;
        
        for(int i=1;i<n;i++){
            int profit = prices[i] - min;
            if(profit>maxprofit){
                maxprofit = profit;
            }
            
            if(prices[i]<min){
                min = prices[i];
            }
        }
        return maxprofit;
    }
};