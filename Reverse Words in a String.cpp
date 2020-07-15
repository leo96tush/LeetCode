class Solution {
public:
    string reverseWords(string s) {

        if (s.length() == 0) return s ;

        int flag = 0 ;

        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] != ' ') {
                flag = 1 ;
                break ;
            }
        }

        if (flag == 0) return "" ;

        vector<string> dummy ;

        stringstream ss(s) ;
        string word ;

        while (getline(ss, word, ' ')) {
            dummy.push_back(word) ;
        }

        vector<string> words ;

        for (string k : dummy) {
            if (k.length() > 0) {
                words.push_back(k) ;
            }
        }

        reverse(words.begin(), words.end()) ;

        string res ;

        for (string k : words) {
            res = res + k + " " ;
        }
        res.pop_back() ;
        return res ;
    }
};