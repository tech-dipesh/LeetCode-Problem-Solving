class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // T.c.: o(n), S.c.: o(1)
     int maxSell=0, buyprice=prices[0];
     for(int i=1;i<prices.size();i++){
        buyprice=min(buyprice, prices[i]);
        if(buyprice<=prices[i]){
            maxSell=max(maxSell, prices[i]-buyprice);
        }
     }   
     return maxSell;
    }
};