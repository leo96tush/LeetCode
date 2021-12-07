typedef unordered_map<string,string> umapss ;
typedef vector<int> vi ;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        vi place ;

        for(int i=0 ; i<nums.size() ; i++){
            if( nums[i]==1 ){
                place.push_back(i) ;
            }
        }
        
        for(int i=1 ; i<place.size() ; i++){
            if( (place[i] - place[i-1] -1) < k ){
                return false ;
            }
        }

        return true ;

    }
};
