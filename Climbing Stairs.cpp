/*
Iteration without Memoization
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int climbStairs(int n) {
        int c = 0 , b , a ;
        a = 1 , b = 2 ;

        if (n <= 2) return n ;

        for ( int i = 2 ; i < n ; i++ ) {
            c = a + b ;
            a = b ;
            b = c ;
        }

        return c ;

    }
};



/*
Recursion with Memoization
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    int ways[100] = {0} ;

    int climbStairs(int n) {
        if (n <= 2) {
            ways[n] = n ;
            return ways[n] ;
        }
        else if (ways[n] != 0) {
            return ways[n] ;
        }
        else {
            ways[n] = climbStairs(n - 1) + climbStairs(n - 2) ;
            return ways[n] ;
        }
    }
};