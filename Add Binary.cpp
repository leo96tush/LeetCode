class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end()) ;
        reverse(b.begin(), b.end()) ;

        int a_len = a.length() , b_len = b.length() ;
        if ( a_len > b_len ) {
            int k = a_len - b_len ;
            while (k) {
                b.push_back('0') ;
                k-- ;
            }
        }
        else if ( a_len < b_len ) {
            int k = b_len - a_len ;
            while (k) {
                a.push_back('0') ;
                k-- ;
            }
        }


        string res ;
        int carry = 0 ;
        for ( int i = 0 ; i < a.length() ; i++ ) {
            int p , q , num ;
            p = (a[i] == '0') ? 0 : 1 ;
            q = (b[i] == '0') ? 0 : 1 ;

            num = p + q + carry ;
            if (num == 3) {
                carry = 1 ;
                res.push_back('1') ;
            }
            else if (num == 2) {
                carry = 1 ;
                res.push_back('0') ;
            }
            else if (num == 1) {
                carry = 0 ;
                res.push_back('1') ;
            }
            else if (num == 0) {
                carry = 0 ;
                res.push_back('0') ;
            }
        }

        if (carry > 0) {
            res.push_back('1') ;
        }

        reverse(res.begin(), res.end()) ;

        return res ;

    }
};