class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = 0;
        for(int i = 0 ; i < candies.size() ; i++){
            m = max(m,candies[i]);
        }
        vector<bool> ans;
        for(int i = 0 ; i < candies.size();i++){
            int a = candies[i]+extraCandies;
            if(a >= m) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};