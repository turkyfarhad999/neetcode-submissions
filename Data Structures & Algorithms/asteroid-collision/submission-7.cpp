class Solution {
public:
     vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for( auto i : asteroids ){
            while(!stack.empty()&&i<0&&stack.back()>0){
                int dif=i+stack.back();
                if(dif>0){
                    i=0;
                }
                else if(dif<0){
                   stack.pop_back();

                }
                else{
                    i=0;
                    stack.pop_back();
                }

            }
            if(i!=0){
                stack.push_back(i);
            }
        }
         return stack;
    }
};