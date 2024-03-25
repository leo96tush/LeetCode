class Solution {
public:
    int weeksum(int start, int num_of_terms){
        return ((num_of_terms)*(2*start+(num_of_terms-1)))/2 ;
    }
    
    int totalMoney(int n) {
        int complete_weeks = n/7 ;
        int last_week_days = n%7 ;
        
        int total_weeks = n/7+1 ;
        
        int total_sum = 0 ;
        
        while(complete_weeks>0){
            total_sum += weeksum(complete_weeks, 7) ;
            complete_weeks-- ;
        }
        total_sum += weeksum(total_weeks, last_week_days) ;
        
        return total_sum  ;
    }
};
