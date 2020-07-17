class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count ;

        for ( int k : nums ) {
            count[k]++ ;
        }

        priority_queue<pair<int, int>> pq ;

        for (auto itr = count.begin() ; itr != count.end() ; ++itr) {
            pq.push({itr->second, itr->first}) ;
        }

        vector<int> res ;

        while (k-- > 0) {
            auto a = pq.top() ; pq.pop() ;
            res.push_back(a.second) ;
        }

        return res ;

    }
};