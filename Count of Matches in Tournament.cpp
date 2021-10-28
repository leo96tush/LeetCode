/*
Space Complexity : O(1)
Time Complexity : O(logn)
*/

class Solution {
public:
    int numberOfMatches(int n) {
        
        vector<int> match(n,0) ;
        
        int total = 0 ;
        
        while(n>1){
            if(n%2==0){
                total += n/2 ;
                n = n/2 ;
            }
            else{
                total += (n-1)/2 ;
                n = 1+(n-1)/2 ;
            }
        }
        
        return total ;
    }
};
