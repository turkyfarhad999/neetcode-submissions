class Solution {
    private:
   bool ispalindrome(string s){
        string ss=s;
        reverse(ss.begin(),ss.end());
        if(s==ss){
            return true;
        }
        else{
            return false;
        }
    }
public:
    bool validPalindrome(string s) {
              if(ispalindrome(s)){
                return true;
              }
              else{
                for(int i =0;i<s.size();i++){
                    string ss=s.substr(0,i)+s.substr(i+1);
                    if(ispalindrome(ss)){
                        return true;
                    }
                }
              }
              return false;
    }
};;