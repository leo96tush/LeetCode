/*
Time Complexity : O(1)
Space Complexity : O(1)
*/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> a = edges[0] ;
        vector<int> b = edges[1] ;
        
        
        int m1 = a[0] ;
        int m2 = a[1] ;
        
        int n1 = b[0] ;
        int n2 = b[1] ;
        
        if(m1==n1){
            return m1 ;
        }
        else if(m2==n1){
            return m2 ;
        }
        else if(m1==n2){
            return m1 ;
        }
        else if(m2==n2){
            return m2 ;
        }
        return 0 ;
    }
};
