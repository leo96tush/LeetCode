/*
Time Complexity : O(n^2)
Space Complexity : O(1)
*/


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int length = arr.size() ;
        int sum = 0 ;
        for(int k=1 ; k<=length ; k=k+2){
            for(int i=0 ; i<length-k+1 ; i++){
                int curr_sum = accumulate(arr.begin()+i, arr.begin()+i+k,0) ;
                sum += curr_sum ;
            }
        }
        
        return sum ;
    }
};
