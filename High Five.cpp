# Solution-1

class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        
        unordered_map<int, vector<int>> marks_mappings ;

        for( auto item: items){
            marks_mappings[item[0]].push_back(item[1]) ;
        }

        vector<vector<int>> output ;

        for( auto marks_mapping: marks_mappings ){
            int student_id = marks_mapping.first ;
            vector<int> marks_set = marks_mapping.second ;

            sort(marks_set.begin(), marks_set.end(), greater<int>());

            int marks_sum = 0 ;
            int count = 0 ;
            for( int i=0 ; i<5 ; i++ ){
                if( count >= 5 ){
                    break ;
                }
                marks_sum += marks_set[i] ;
                count++ ;
            }

            vector<int> temp_vec ;
            temp_vec.push_back(student_id) ;
            temp_vec.push_back(marks_sum/5) ;

            output.push_back(temp_vec) ;

        }

        sort(output.begin(), output.end()) ;

        return output ;
    }
};
