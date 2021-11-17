/*
Time Complexity : O(1)
Space Complexity : O(1)
*/

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0] - 'a' ;
        int b = coordinates[1] - '1' ;
        
        if((a+b)%2==0){
            return false ;
        }
        else{
            return true ;
        }
        return true ;
    }
};
