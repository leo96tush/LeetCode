class Solution {
public:
    double average(vector<int>& salary) {
        long long int maximum_salary = -1 , minimum_salary = 1000001 ;
        
        for(long long int k : salary){
            maximum_salary = max(maximum_salary, k) ;
            minimum_salary = min(minimum_salary, k) ;
        }
        
        double total = double(accumulate(salary.begin(), salary.end(), 0)) ;
        
        total = total - double(maximum_salary) - double(minimum_salary) ;
        
        return total/(salary.size()-2) ;
        
    }
};
