class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> temp_stack ;

        int n = asteroids.size() ;

        for(int i=0 ; i<n ; i++){
            // If stack is empty or current asteroid is moving right, push it to stack
            if(temp_stack.empty() || asteroids[i]>0){
                temp_stack.push(asteroids[i]) ;
            } else {
                // Current asteroid is moving left, handle collisions
                while(!temp_stack.empty() && temp_stack.top() > 0 && temp_stack.top() < -asteroids[i]){
                    // Smaller asteroids moving right are destroyed
                    temp_stack.pop() ;
                }
                
                if(!temp_stack.empty() && temp_stack.top() == -asteroids[i]){
                    // Equal size asteroids destroy each other
                    temp_stack.pop() ;
                } else if(temp_stack.empty() || temp_stack.top() < 0){
                    // Current asteroid survives if stack is empty or top asteroid is moving left
                    temp_stack.push(asteroids[i]) ;
                }
                // If none of the above conditions are met, current asteroid is destroyed (implicit)
            }
        }

        // Convert stack to vector for output
        vector<int> output ;

        while(!temp_stack.empty()){
            output.push_back(temp_stack.top()) ;
            temp_stack.pop() ;
        }

        // Reverse the output to get correct order
        reverse(output.begin(), output.end()) ;

        return output ;

    }
};