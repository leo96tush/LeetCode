class Solution {
public:
    bool isleapyear(int year_num){
        
        if ((year_num % 4 == 0 && year_num % 100 != 0) || (year_num % 400 == 0)) {
            return true;
        }
        return false ;
    }

    int numberOfDays(int year, int month) {
        unordered_set<int> thirtyone_days = {1,3,5,7,8,10,12} ;
        unordered_set<int> thirty_days = {4,6,9,11} ;
        unordered_set<int> less_than_thirty_days = {2} ;

        if(thirtyone_days.find(month) !=thirtyone_days.end()){
            return 31 ;
        }
        else if(thirty_days.find(month) !=thirty_days.end()){
            return 30 ;
        }
        else if(isleapyear(year) && less_than_thirty_days.find(month)!=less_than_thirty_days.end()){
            return 29 ;
        }
        return 28 ;
    }
};
