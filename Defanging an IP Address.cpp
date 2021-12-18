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
    string defangIPaddr(string address) {
        
        string result = "" ;

        for(int i=0 ; i<address.size() ; i++){
            if(address[i]=='.'){
                result = result + "[.]" ;
            }
            else{
                result = result + address[i] ;
            }
        }

        return result ;

    }
};
