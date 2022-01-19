class Solution {
public:
    int helper(int total_bottles, int fullBottles, int emptyBottles, int numExchange){
        
    
        total_bottles += fullBottles ;
        emptyBottles += fullBottles ;
        
        if(emptyBottles < numExchange){
            return total_bottles ;
        }
        
        return helper(total_bottles, emptyBottles/numExchange, emptyBottles%numExchange, numExchange) ;
        
    }
    
    int numWaterBottles(int numBottles, int numExchange) {
        return helper(0, numBottles, 0, numExchange) ;
    }
};
