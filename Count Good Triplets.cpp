/*
Time Complexity : O(n^3)
Space Complexity : O(1)
*/

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        
        int length = arr.size() , count = 0 ;
        
        for(int i=0 ; i<length ; i++){
            for(int j=i+1 ; j<length ; j++){
                for(int k=j+1 ; k<length ; k++){
                    
                    if( abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[k]-arr[i])<=c )
                        count++ ;
                    
                }
            }
        }
        
        return count ;
    }
};
