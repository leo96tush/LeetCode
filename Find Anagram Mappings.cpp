class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, vector<int>> mapper ;

        for(int i=0 ; i<nums2.size() ; i++){
            mapper[nums2[i]].push_back(i) ;
        }

        vector<int> output ;

        for( int i=0 ; i<nums1.size() ; i++ ){
            output.push_back(mapper[nums1[i]][0]) ;
            mapper[nums1[i]].erase(mapper[nums1[i]].begin()) ;
        }

        return output ;

    }
};
