class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0,mina=prices[0];

        for(int i=1;i<prices.size();i++){
            maxp = std::max(maxp,prices[i]-mina);
            mina = std::min(mina,prices[i]);
        }
        return maxp;
    }
};