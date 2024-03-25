class Solution {
public:
    int countTriples(int n) {
        int count = 0 ;
        for(int i=1 ; i<=n ; i++){
            for(int j=i ; j<=n ; j++){
                if(sqrt(i*i+j*j)==int(sqrt(i*i+j*j)) and i*i+j*j<=n*n){
                    cout << i << " " << j << endl ;
                    if(i==j){
                        count++ ;
                    }
                    else{
                        count += 2 ;   
                    }
                }
            }
        }
        return count ;
    }
};
