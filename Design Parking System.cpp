/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

class ParkingSystem {
public:
    int big_count = 0, medium_count = 0, small_count = 0 ;
    ParkingSystem(int big, int medium, int small) {
        big_count = big ;
        medium_count = medium ;
        small_count = small ;
    }
    
    bool addCar(int carType) {
        if (carType==1 and big_count>0){
            big_count-- ;
            return true ;
        }
        if (carType==2 and medium_count>0){
            medium_count-- ;
            return true ;
        }
        if (carType==3 and small_count>0){
            small_count-- ;
            return true ;
        }
        return false ;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
