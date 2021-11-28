class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        sort(arr.begin(), arr.end()) ;

        int arithematic_diff = abs(arr[1]-arr[0]) ;

        for(int i=0; i<arr.size()-1 ; i++){
            if( abs(arr[i+1] - arr[i]) != arithematic_diff ){
                return false ;
            }
        }

        return true ;
    }
};
