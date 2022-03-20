class Solution {
public:
    int sumOfDigits(int number){
        
        int sum = 0 ;
        
        while(number>0){
            sum += number%10 ;
            number = number/10 ;
        }
        
        return sum ;
    }
    
    int countEven(int num) {
        
        int count = 0 ;
        
        for( int i = 1  ; i <= num ; i++ ){
            if((sumOfDigits(i))%2 == 0){
                count++ ;
            }
        }
        
        return count ; 
    }
};
