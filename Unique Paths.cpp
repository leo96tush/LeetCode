/*
Combinatorics Formula
Time Complexity : O(max(m,n))
Space Complexity : O(1)
*/

class Solution {
public:
    int uniquePaths(int m, int n) {

        int p = (m - 1) + (n - 1) ;
        int q = max(m - 1, n - 1) ;
        int r = min(m - 1, n - 1) ;

        unsigned long long int res = 1 ;

        while (p > q) {
            res = res * p ;
            p-- ;
        }

        while (r >= 1) {
            res = res / r ;
            r-- ;
        }


        return res;
    }
};


/*
Number of Paths Array
Time Complexity : O(n^2)
Space Complexity : O(n^2)
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int>(m, 0)) ;


        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ ) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1 ;
                }
                else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1] ;
                }
            }
        }

        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ ) {
                cout << dp[i][j] << " " ;
            }
            cout << endl ;
        }

        return dp[n - 1][m - 1];
    }
};