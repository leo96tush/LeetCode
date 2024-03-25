typedef unordered_map<string,string> umapss ;


class Solution {
public:
    string reformatDate(string date) {

        umapss month_map ;
        
        month_map["Jan"] = "01" ;
        month_map["Feb"] = "02" ;
        month_map["Mar"] = "03" ;
        month_map["Apr"] = "04" ;
        month_map["May"] = "05" ;
        month_map["Jun"] = "06" ;
        month_map["Jul"] = "07" ;
        month_map["Aug"] = "08" ;
        month_map["Sep"] = "09" ;
        month_map["Oct"] = "10" ;
        month_map["Nov"] = "11" ;
        month_map["Dec"] = "12" ;

        string date_num = "" , month_num = "" , year_num = "" ;
        
        stringstream ss(date) ;
        string word ;
        vector<string> words ;
        
        while(ss >> word){
            words.push_back(word) ;
        }
        
        for(int i=0 ; i<words[0].size() ; i++){
            if(words[0][i]>='0' and words[0][i]<='9'){
                date_num += words[0][i] ;
            }
        }
        
        if(date_num.size()==1){
            date_num = "0" + date_num ;
        }

        month_num = month_map[words[1]] ;

        for(int i=0 ; i<words[2].size() ; i++){
            year_num += words[2][i] ;
        }
        
        return year_num + "-" + month_num + "-" + date_num ;
    }
};
