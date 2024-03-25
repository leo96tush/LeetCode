class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        map<int, bool> umap ;
        
        for(int i=0 ; i<arr.size() ; i++){
            umap[arr[i]] = true ;
        }
        
        int k_miss = 0 ;
        
        for(int i=1 ; i<30000 ; i++){
            if(umap[i] == false){
                k_miss++ ;
                if(k_miss == k){
                    return i ;
                }
            }
        }
        return 0 ;
    }
};
