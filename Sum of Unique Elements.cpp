/*
Array Traverse
Space Complexity : O(k) (Number of distinct k elements)
Time Complexity : O(n)
*/


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp ;
        
        for(int i: nums){
            mp[i]++ ;
        }
        
        long long int sum = 0 ;
        
        for(auto m : mp){
            if(m.second==1){
                sum += m.first ;
            }
        }
        return sum ;
    }
};
