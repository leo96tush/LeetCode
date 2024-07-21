class Solution {
public:

    bool contain_non_rotate_num(string string_num){
        
        unordered_set<char> check_set = {'2', '3', '4', '5', '7'} ;

        for(int i=0 ; i<string_num.size(); i++){

            if(check_set.contains(string_num[i])){
                return true ;
            }
        }

        return false ;
    }

    bool confusingNumber(int n) {
        
        string number_string = to_string(n) ;

        if(contain_non_rotate_num(number_string)){
            return false ;
        }

        string reversed_number_string(number_string.rbegin(), number_string.rend()) ;

        for(int i=0 ; i<reversed_number_string.size() ; i++){
            if(reversed_number_string[i] == '6'){
                reversed_number_string[i] = '9' ;
            }
            else if(reversed_number_string[i] == '9'){
                reversed_number_string[i] = '6' ;
            }
        }

        if(reversed_number_string == number_string){
            return false ;
        }

        return true ;
    }
};
