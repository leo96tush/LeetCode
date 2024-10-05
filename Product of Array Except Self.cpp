class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count_of_zero = 0 ;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == 0){
                count_of_zero++ ;
            }
        }

        if(count_of_zero > 1){
            for(int i=0 ; i<nums.size() ; i++){
                nums[i] = 0 ;
            }
            return nums ;
        }
        else if(count_of_zero == 1){
            int product = 1 ;
            for(int i=0 ; i<nums.size() ; i++){
                if(nums[i]!=0){
                    product = product * nums[i] ;
                }
            }

            for(int i=0 ; i<nums.size() ; i++){
                if(nums[i] == 0){
                    nums[i] = product ;
                }
                else{
                    nums[i] = 0 ;
                }
            }

            return nums ;
        }
        else{
            int product = 1 ;
            for(int i=0 ; i<nums.size() ; i++){
                if(nums[i]!=0){
                    product = product * nums[i] ;
                }
            }

            for(int i=0 ; i<nums.size() ; i++){
                nums[i] = product/(nums[i]) ;
            }
            
            return nums ;
        }

    }
};