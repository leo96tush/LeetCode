class Solution {
public:
    bool isPathCrossing(string path) {
        
        int curr_x = 0 ;
        int curr_y = 0 ;
        int move_x = 0 ;
        int move_y = 0 ;
        
        map<pair<int,int> , bool> mapping ;
        
        mapping[{0,0}] = true ;
        
        for(int i=0 ; i<path.size() ; i++){
            if(path[i]=='N'){
                move_x = 0 ;
                move_y = 1 ;
            }
            else if(path[i]=='S'){
                move_x = 0 ;
                move_y = -1 ;
            }
            else if(path[i]=='E'){
                move_x = 1 ;
                move_y = 0 ;
            }
            else if(path[i]=='W'){
                move_x = -1 ;
                move_y = 0 ;
            }
            
            curr_x += move_x ;
            curr_y += move_y ;
            
            if(mapping[{curr_x, curr_y}]==true){
                return true ;
            }
            else{
                mapping[{curr_x, curr_y}] = true ;
            }   
        }
        return false ;
    }
};
