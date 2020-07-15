class Solution {
    public String reverseWords(String s) {

        if (s.length() == 0) return s ;

        int flag = 0  ;

        for ( int i = 0 ; i < s.length() ; i++ ) {
            if (s.charAt(i) != ' ') {
                flag = 1 ;
                break ;
            }
        }

        if (flag == 0) return "" ;

        String[] words = s.split(" ") ;

        String res = "" ;

        Collections.reverse(Arrays.asList(words));

        for ( int i = 0 ; i < words.length ; i++ ) {
            if (words[i].length() > 0) {
                res = res + words[i] + " " ;
            }
        }

        return res.substring(0, res.length() - 1) ;
    }
}