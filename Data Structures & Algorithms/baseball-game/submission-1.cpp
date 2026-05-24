class Solution {
public:
     int calPoints(vector<string>& operations) {
        vector<int> vec;
       for(auto i : operations){
        if(i=="+"){
            int tot=0;
             tot=vec[vec.size()-1]+vec[vec.size()-2];
            vec.push_back(tot);
            continue;
        }
        if(i=="C"){vec.pop_back();
        continue;}
        if(i=="D"){
            int f=vec[vec.size()-1];
            f=f*2;
            vec.push_back(f);
            continue;
        }
       
        vec.push_back(stoi(i));
        
        
       }
       int sum=0;
       for(auto i: vec){
        sum+=i;
       }
        return sum;
    }
};