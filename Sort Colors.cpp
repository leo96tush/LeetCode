/*
Single Pass Algorithm
Time Complecity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0  , mid = 0 , end = nums.size()-1 ;
        
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[start]) ;
                start++ ; mid++ ;
            }    
            else if(nums[mid]==1){
                mid++ ;
            }
            else{
                swap(nums[mid],nums[end]) ;
                end-- ;
            }
        }
    }
};

/*
Double Pass Algorithm (Counting) 
Time Complecity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0 , cnt1 = 0 , cnt2 = 0 ;
        for( int num : nums ){
            if(num==0) cnt0++ ;
            else if(num==1) cnt1++ ;
            else if(num==2) cnt2++ ;
        }
        
        int k = 0 ;
        while(k<nums.size()){
            if(cnt0>0){
                nums[k] = 0 ;
                cnt0-- ;
                k++ ;
            }
            else if(cnt1>0){
                nums[k] = 1 ;
                cnt1-- ;
                k++ ;
            }
            else if(cnt2>0){
                nums[k] = 2 ;
                cnt2-- ;
                k++ ;
            }
        }
    }
};

/*
In-built Sorting STL
Time Complecity : O(nlogn)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
    }
};
