class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best=prices[0];
        int profit=0;
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
         
    
          if(prices[i]>best){
                maxprofit=max(maxprofit,prices[i]-best);
          }
           best=min(best,prices[i]);
        }
       
         
         return maxprofit;
        
    }
};