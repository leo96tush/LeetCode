class Solution {
public:
    bool isGoodString(string str){
        unordered_map<char, int> mp ;

        for(int i=0 ; i<str.size() ; i++){
            mp[str[i]]++ ;
            if(mp[str[i]]>1){
                return false ;
            }
        }

        return true ;
    }

    int countGoodSubstrings(string s) {
        
        int count = 0 ;
        
        if(s.size()<3){
            return false ;
        }
        

        for(int i=0 ; i<s.size()-2 ; i++){
            string subst = s.substr(i, 3) ;
            if(isGoodString(subst)==true){
                count++ ;
            }
        }
        return count ;
    }
};
