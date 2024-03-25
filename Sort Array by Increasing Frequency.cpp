class Solution {
public:
    static bool cmp(pair<int,int> &l, pair<int, int> &r){
        if (l.second == r.second)
            return l.first > r.first;
        return l.second < r.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), cmp);
        int x = 0;
        for(auto i: v){
            while(i.second!=0){
                nums[x++] = i.first;
                i.second--;
            }
        }
        return nums;
    }
};
