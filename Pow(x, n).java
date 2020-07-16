class Solution {
    HashMap<Integer, Double> mp = new HashMap<Integer, Double>();
    public Double solve1(Double x, int n) {
        if (n == 0) {
            double one = 1 ;
            return one ;
        } else if (n == 1) {
            return x ;
        } else if (n % 2 == 0) {
            if (mp.get(n / 2) != null) {
                return mp.get(n / 2) * mp.get(n / 2) ;
            } else {
                mp.put(n / 2, solve1(x, n / 2)) ;
                return mp.get(n / 2) * mp.get(n / 2) ;
            }
        } else if (n % 2 != 0) {
            return solve1(x, n + 1) / x ;
        }
        return x ;
    }

    public Double solve2(Double x, int n) {
        if (n == 0) {
            double one = 1 ;
            return one ;
        } else if (n == 1) {
            return x ;
        } else if (n % 2 == 0) {
            if (mp.get(n / 2) != null) {
                return mp.get(n / 2) * mp.get(n / 2) ;
            } else {
                mp.put(n / 2, solve1(x, n / 2)) ;
                return mp.get(n / 2) * mp.get(n / 2) ;
            }
        } else if (n % 2 != 0) {
            return solve2(x, n - 1) * x ;
        }
        return x ;
    }

    public Double myPow(Double x, int n) {
        if (x == 0 && n == 0) {
            double one = 1 ;
            return one ;
        } else if (x == 0 || x == 1) {
            return x ;
        } else {
            if (n == 0) {
                double one = 1 ;
                return one ;
            } else if (n < 0) {
                return solve1(x, n) ;
            } else if (n > 0) {
                return solve2(x, n) ;
            }
        }
        return x ;
    }
}