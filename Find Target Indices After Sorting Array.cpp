#include<bits/stdc++.h>
using namespace std ;

typedef unordered_map<char, int> umapci ;
typedef unordered_map<string,string> umapss ;
typedef unordered_map<char, int> umapci ;
typedef vector<int> vi ;
typedef vector<char> vc ;
typedef stack<char> sc ;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        int count_low = 0 ;
        int count_high = 0 ;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] < target){
                count_low++ ;
            }
            else if(nums[i] > target){
                count_high++ ;
            }
        }

        vi result ;

        for(int i=count_low ; i<nums.size() - count_high ; i++){
            result.push_back(i) ;
        }

        return result ;
          
    }
};
