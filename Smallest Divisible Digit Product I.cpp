//
// Created by gupta on 26-12-2024.
//
class Solution {
public:
	int prodOfDigits(int number) {
		int product = 1 ;

		while(number > 0) {
			product = product * (number%10) ;
			number = number/10 ;
		}
		return product ;
	}
	int smallestNumber(int n, int t) {

		int curr_num = n ;

		while(prodOfDigits(curr_num)%t != 0) {
			curr_num++ ;
		}

		return curr_num ;
	}
};