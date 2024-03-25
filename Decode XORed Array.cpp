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
    vector<int> decode(vector<int>& encoded, int first) {
        vi result ;

        result.push_back(first) ;

        for(int i=0 ; i<encoded.size() ; i++){

            int c = encoded[i] ;
            int a = result[i] ;

            int b = c ^ a ;

            result.push_back(b) ;

        }

        return result ;

    }
};
