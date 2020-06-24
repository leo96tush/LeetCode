class Solution {
public:
    unsigned long long int binCoeff(unsigned long long int n, unsigned long long int k) {
        unsigned long long int res = 1 ;

        if (k > n - k) k = n - k ;

        for ( int i = 0 ; i < k ; i++ ) {
            res *= (n - i) ;
            res /= (i + 1) ;
        }
        return res ;
    }

    unsigned long long int catalan(unsigned long long int n) {
        unsigned long long int c = binCoeff(2 * n, n) ;
        return c / (n + 1) ;
    }

    int numTrees(int n) {
        return catalan(n) ;
    }
};