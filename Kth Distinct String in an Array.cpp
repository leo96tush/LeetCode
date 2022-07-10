class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        string result_string = "" ;
        unordered_map<string, int> string_count ;

        for( string s : arr ){
            string_count[s]++ ;
        }
        
        int k_count = 0 ;

        for( string s : arr ){
            
            if(string_count[s]==1){
                k_count++ ;
                if(k_count==k){
                    return s ;
                }
            }
        }

        return result_string ;

    }
};