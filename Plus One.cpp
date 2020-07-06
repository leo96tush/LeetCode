class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end()) ;

        int carry = 0 , number = 0 ;

        for (int i = 0 ; i < digits.size() ; i++) {
            if (i == 0) {
                int k = digits[i] + carry ;
                number = (k + 1) % 10 ;
                carry = (k + 1) / 10 ;
                digits[i] = number ;
            }
            else {
                int k = digits[i] + carry ;
                number = (k) % 10 ;
                carry = (k) / 10 ;
                digits[i] = number ;
            }
        }
        if (carry != 0) digits.push_back(1) ;
        reverse(digits.begin(), digits.end()) ;
        return digits ;

    }
};