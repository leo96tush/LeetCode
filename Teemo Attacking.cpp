typedef unordered_map<char, int> umapci ;
typedef unordered_map<string,string> umapss ;
typedef vector<int> vi ;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        long long int total_duration = 0 ;


        for(int i=0 ; i<timeSeries.size() ; i++){
            total_duration += duration ;
        }

        for(int i=1 ; i<timeSeries.size() ; i++){
            if((timeSeries[i] - timeSeries[i-1])<duration){
                total_duration -= duration ;
                total_duration += (timeSeries[i] - timeSeries[i-1]) ;
            }
        }
        
        return total_duration ;
    }
};
