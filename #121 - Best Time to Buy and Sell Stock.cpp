class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int minn = prices[0];
        int maxx = 0;
        int ans = 0;
        for(int i = 0 ; i < prices.size(); i++){
            if(prices[i]<minn){
                minn = prices[i];
                maxx = minn;
            }
            maxx = max(maxx,prices[i]);
            ans = max(ans,maxx-minn);
        }
        return ans;
    }
};