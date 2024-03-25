class Solution {
public:
    bool check(unordered_map<int,int> umap, int test){
        unordered_map<int, int> umap_test ;
        
        for(int i=0 ; i<=9 ; i++){
            umap_test[i] = 0 ;
        }
        
        string test_string = to_string(test) ;
        
        for(int i=0 ; i<test_string.size() ; i++){
            int k = test_string[i] - '0' ;
            umap_test[k]++ ;
        }
        
        for(auto itr : umap_test){
            if( umap_test[itr.first] > umap[itr.first] ){
                return false ;
            }
        }
        
        return true ;
    }
    
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        unordered_map<int, int> umap ;
        
        for(int i=0 ; i<=9 ; i++){
            umap[i] = 0 ; 
        }
        
        for(int i=0 ; i<digits.size() ; i++){
            umap[digits[i]]++ ;
        }
        
        vector<int> result ;
        
        for(int i=100 ; i<=999 ; i=i+2){
            if(check(umap, i) == true){
                result.push_back(i) ;
            }
        }
        
        return result ;
    }
};
