/*
Dynamic Programming Solution
Space Complexity : O(n)
Time Complexity : O(n*sqrt(n))
*/

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 2, 1e9) ;

        for ( int i = 1 ; i <= sqrt(n) ; i++ ) {
            dp[i * i] = 1 ;
        }



        for ( int i = 1 ; i <= n + 1 ; i++ ) {
            if (dp[i] != 1) {
                for ( int j = 1 ; j <= sqrt(i) ; j++ ) {
                    dp[i] = min(dp[i], dp[j * j] + dp[i - (j * j)]) ;
                }
            }
        }

        return dp[n] ;

    }
};