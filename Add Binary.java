class Solution {
    public String addBinary(String a, String b) {
        String res = "";

        Integer number = 0;

        Integer i = a.length() - 1, j = b.length() - 1;
        while (i >= 0 || j >= 0 || number == 1) {

            number += ((i >= 0) ? a.charAt(i) - '0' : 0);
            number += ((j >= 0) ? b.charAt(j) - '0' : 0);

            res = (char)(number % 2 + '0') + res ;

            number /= 2;

            i--; j--;
        }

        return res ;
    }
}