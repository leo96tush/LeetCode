class Solution {
public:
    string maximumTime(string time) {
        
        if(time[4] == '?'){
            time[4] = '9' ;
        }
        
        if(time[3] == '?'){
            time[3] = '5' ;
        }
        
        if(time[0] == '?' and time[1] == '?'){
            time[0] = '2' ;
            time[1] = '3' ;
        }
        else if(time[0] == '?' and time[1]>='0' and time[1]<='9'){
            if(time[1]>='0' and time[1]<='3'){
                time[0] = '2' ;
            }
            else if(time[1]>='4'){
                time[0] = '1' ;
            }
        }
        else if(time[1] == '?' and time[0]>='0' and time[0]<='2'){
            if(time[0]>='0' and time[0]<='1'){
                time[1] = '9' ;
            }
            else if(time[0]>='2'){
                time[1] = '3' ;
            }
        }
        
        return time  ;
    }
};
