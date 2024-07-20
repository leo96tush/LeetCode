class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        int count = 0 ;

        unordered_set<string> col_strings ;

        for(string email: emails){

            int i = 0 ;
            bool flag = false ;
            string temp_string = "" ;

            while( i < email.size() ){
                if(email[i] == '.' && flag == false){
                    i++ ;
                }
                else if( email[i] == '+' && flag == false ){
                    while( email[i] != '@' ){
                        i++ ;
                    }
                }
                else{
                    if (email[i] == '@'){
                        flag = true ;
                    }
                    temp_string += email[i] ;
                    i++ ;
                }
            }

            cout << temp_string << endl  ;
            col_strings.insert(temp_string) ;

        }
        
        
        return col_strings.size() ;
    }
};
