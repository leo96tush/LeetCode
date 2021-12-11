class Solution {
public:
    bool isPrime(int n){
        int sqrt_n = sqrt(n) + 1 ;
        for(int i=2 ; i<=sqrt_n ; i++){
            if(n%i == 0){
                return false ;
            }
        }
        return true ;
    }
    
    bool isThree(int n) {
        if(n<=2){
            return false ;
        }
        
        if(n==4){
            return true ;
        }
        
        float square_root = int(sqrt(n)) ;
        
        if(square_root * square_root != n){
            return false ;
        }
        
        if(isPrime(square_root)==true){
            return true ;
        }
        
        return false ;
    }
};
