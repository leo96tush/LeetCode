class Solution {
public:
    int secondHighest(string s) {
        
        int first = -1 , second = -1 ;
        
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]>='0' and s[i]<='9'){
                int curr = int(s[i]-'0') ;
                if(curr > first){
                    second = first ;
                    first = curr ;
                }
                else if(curr > second and curr!=first){
                    second = curr ;
                }
            }
        }
        
        return second ;
    }
};
