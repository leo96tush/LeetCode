class Solution {
public:
    bool checkIPv4(string s) {
        int count = 0 ;
        for ( int i = 0 ; i < s.length() ; i++ ) {
            if (s[i] == '.') {
                count++ ;
            }
        }

        if (count > 3) return false ;

        vector<string> mystring ;

        stringstream str(s) ;
        string word ;

        while (getline(str, word, '.')) {
            mystring.push_back(word) ;
        }

        if (mystring.size() != 4) return false ;

        for ( int i = 0 ; i < mystring.size() ; i++ ) {
            if (mystring[i].length() < 1 || mystring[i].length() > 3) return false ;
            for ( int j = 0 ; j < mystring[i].length() ; j++ ) {
                if (!(mystring[i][j] >= '0' && mystring[i][j] <= '9')) {
                    return false ;
                }

            }
            int k = stoi(mystring[i]) ;
            if (k < 0 || k > 255) return false ;
            string m = to_string(k) ;
            if (m.length() != mystring[i].length()) return false ;
        }
        return true ;
    }

    bool checkIPv6(string s) {
        int count = 0 ;
        for ( int i = 0 ; i < s.length() ; i++ ) {
            if (s[i] == ':') {
                count++ ;
            }
        }

        if (count > 7) return false ;

        vector<string> mystring ;

        stringstream str(s) ;
        string word ;

        while (getline(str, word, ':')) {
            mystring.push_back(word) ;
        }

        if (mystring.size() != 8) return false ;

        for ( int i = 0 ; i < mystring.size() ; i++ ) {
            string a = mystring[i] ;
            if ( a.length() > 4 || a.length() < 1 ) return false ;
            for ( int j = 0 ; j < a.size() ; j++ ) {
                if ( !(a[j] >= 'a' && a[j] <= 'f') && !(a[j] >= 'A' && a[j] <= 'F') && !(a[j] >= '0' && a[j] <= '9') ) {
                    return false ;
                }
            }
        }
        return true ;
    }

    string validIPAddress(string IP) {
        if (checkIPv4(IP) == true) {
            return "IPv4" ;
        }
        if (checkIPv6(IP) == true) {
            return "IPv6" ;
        }
        return "Neither" ;
    }
};