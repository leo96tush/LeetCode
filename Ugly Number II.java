class Solution {
    public int nthUglyNumber(int n) {
        ArrayList<Integer> myvec = new ArrayList<Integer>();

        Integer i = 0 , j = 0 , k = 0 ;
        Integer t = n + 2 ;
        myvec.add(1) ;

        while (myvec.size() < t) {
            Integer min2 = myvec.get(i) * 2 ;
            Integer min3 = myvec.get(j) * 3;
            Integer min5 = myvec.get(k) * 5;

            Integer mynum = Math.min(min2, Math.min(min3, min5)) ;

            myvec.add(mynum) ;
            if (mynum == min2)
                i++ ;
            if (mynum == min3)
                j++ ;
            if (mynum == min5)
                k++ ;
        }

        return myvec.get(n - 1) ;
    }
}