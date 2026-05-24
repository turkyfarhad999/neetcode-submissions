class Solution {
public:
    bool isAnagram(string s, string t) {
           int flag=0;
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      cout<<s<<" "<<t;
      if(s.size()==t.size()){
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]){
               flag=1;
            }
            else{
                flag=0;
                break;
            }

        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
      }
      else{
        return false;
      }
        
    }
};
