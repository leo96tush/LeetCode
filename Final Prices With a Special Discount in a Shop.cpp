/*
Time Complexity : O(n^2)
Space Complexity : O(n)
*/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> cost;
        
        for(int i=0 ; i<prices.size() ; i++){
            cost.push_back(prices[i]) ;
            for(int j=i+1 ; j<prices.size() ; j++){
                if(prices[j]<=prices[i]){
                    cost.pop_back() ;
                    cost.push_back(prices[i] - prices[j]) ;
                    break ;
                }
            }
        }
        
        return cost ;
    }
};
