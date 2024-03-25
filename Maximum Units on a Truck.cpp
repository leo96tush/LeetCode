class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        vector<vector<int>> typeBox ;
        
        for(vector<int> vec : boxTypes){
            int a = vec[0] , b = vec[1] ;
            vector<int> temp ;
            temp.push_back(b) ;
            temp.push_back(a) ;
            typeBox.push_back(temp) ;
        }
        
        sort(typeBox.begin(), typeBox.end()) ;
        reverse(typeBox.begin(), typeBox.end()) ;
        
        long long int total = 0, total_units = 0 ;
        
        for(int i=0 ; i<typeBox.size() ; i++){
            int num_units = typeBox[i][0] ;
            int num_box = typeBox[i][1] ;
            int j = 0 ;
            
            while((total + j) < truckSize and j<num_box){
                j++ ;
            }
            
            total += j ;
            total_units += num_units*j ;
            
        }
        
        return total_units ;
    }
};
