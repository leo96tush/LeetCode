class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> num ;

        for ( int i = 0 ; i < 32 ; i++ ) {
            num.push_back(n % 2) ;
            n /= 2 ;
        }

        reverse(num.begin(), num.end()) ;

        uint32_t result = 0 ;

        unsigned long long int pow = 1 ;

        for ( int i = 0 ; i < 32 ; i++ ) {
            result += (num[i] * pow) ;
            pow = pow * 2 ;
        }

        return result  ;

    }
};