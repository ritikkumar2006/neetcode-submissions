class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int st=0,end=st+1;
        while(end<n){
            if(prices[st]>prices[end]){
                st++;
            }else{
                int profit=prices[end]-prices[st];
                maxprofit=max(profit,maxprofit);
                end++;
            }
        }
        return maxprofit;
        

        
    }
};
