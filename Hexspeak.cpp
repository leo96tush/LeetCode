class Solution {
public:

    string hexadecimal(string num){
        long long int number = stoll(num) ;
        string output = "" ;

        while(number > 0){

            int char_num = 0 ;
            string char_char = "" ;

            char_num = number % 16 ;
            number = number/16 ;

            if(char_num > 9){
                char_char = 'A' + (char_num - 10) ;
                output += char_char ;
            }
            else{
                output += to_string(char_num) ;
            }            
            
        }

        reverse(output.begin(), output.end()) ;

        for(int i = 0 ; i<output.size() ; i++){
            if ( output[i] == '0' ){
                output[i] = 'O';
            }
            else if( output[i] == '1' ){
                output[i] = 'I' ;
            }
        }

        return output ;

    }

    bool isvalid(string hexa_string){
        unordered_set<char> check_set = {'A', 'B', 'C', 'D', 'E', 'F', 'I', 'O'} ;

        for(int i=0 ; i<hexa_string.size() ; i++){
            if( check_set.find(hexa_string[i]) != check_set.end()){
                continue ;
            }
            else{
                return false ;
            }
        }

        return true ;
    }

    string toHexspeak(string num) {

        if( isvalid(hexadecimal(num)) ){
            return hexadecimal(num) ;
        }

        return "ERROR" ;
    }
};