class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(), arr.end()) ;
        
        int remove = 0.05 * arr.size() ;
        
        double arr_sum = 0 ;
        
        for(int i=remove ; i<arr.size()-remove ; i++){
            arr_sum += arr[i] ;
        }
        
        return arr_sum/(arr.size()-2*remove) ;
        
    }
};
