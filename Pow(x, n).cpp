class Solution {
public:
    unordered_map<int, double> mp ;
    double solve1(double x, int n) {
        if (n == 0) {
            return 1 ;
        }
        else if (n == 1) {
            return x ;
        }
        else if (n % 2 == 0) {
            if (mp[n / 2] != 0) {
                return mp[n / 2] * mp[n / 2] ;
            }
            else {
                mp[n / 2] = solve1(x, n / 2) ;
                return mp[n / 2] * mp[n / 2] ;
            }
        }
        else if (n % 2 != 0) {
            return solve1(x, n + 1) / x ;
        }
        return x ;
    }

    double solve2(double x, int n) {
        if (n == 0) {
            return 1 ;
        }
        else if (n == 1) {
            return x ;
        }
        else if (n % 2 == 0) {
            if (mp[n / 2] != 0) {
                return mp[n / 2] * mp[n / 2] ;
            }
            else {
                mp[n / 2] = solve1(x, n / 2) ;
                return mp[n / 2] * mp[n / 2] ;
            }
        }
        else if (n % 2 != 0) {
            return solve1(x, n - 1) * x ;
        }
        return x ;
    }

    double myPow(double x, int n) {
        if (x == 0 && n == 0) return 1 ;
        else if (x == 0 || x == 1) return x ;
        else {
            if (n == 0) {
                return 1 ;
            }
            else if (n < 0) {
                return solve1(x, n) ;
            }
            else if (n > 0) {
                return solve2(x, n) ;
            }
        }
        return x ;
    }
};