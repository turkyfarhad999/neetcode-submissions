class Solution {
public:
    int count;
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> vec;
        int maxelem=*max_element(temperatures.begin(),temperatures.end());
      for( int i =0 ;i< temperatures.size();i++){
     count=0;
        for( int j =i+1 ; j< temperatures.size(); j++){
            
            if(temperatures[i]<temperatures[j]){
                
                count++;
                break;

            }
            else{
                if(temperatures[i]<maxelem){
                    int temp=*max_element(temperatures.begin()+i,temperatures.end());
                    if(temp==temperatures[i]){
                        count=0;
                    }
                    else{count++;
                    }
                }
                else{
                    count=0;
                    break;
                }

                

            }
        }
        vec.push_back(count);
      }
     return vec;  
    }
};
