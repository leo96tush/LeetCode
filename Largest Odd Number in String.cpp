class Solution {
public:
    string largestOddNumber(string num) {
        
        int max_num = -1 ;
        
        for(int i=0 ; i<num.size() ; i++){
            if(((num[i] - '0')%2) != 0){
                max_num = max(max_num, i) ;
            }
        }
        
        if(max_num==-1){
            return "" ;
        }
        
        return num.substr(0, max_num+1) ;
    }
};
