class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazine_map;
        for(char c : magazine){
            magazine_map[c]++;
        }
        for(char c : ransomNote){
                if(magazine_map[c] == 0){
                    return false;
                }
            magazine_map[c]--;
        }
        return true;
    }
};